#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <curl/curl.h>

int main() {
    int count_from, count_to, delay;
    char authorization_code[100], channel_id[100];
    char url[256];
    
    // Taking input from terminal
    printf("Enter the starting count (count_from): ");
    scanf("%d", &count_from);

    printf("Enter the ending count (count_to): ");
    scanf("%d", &count_to);

    printf("Enter the delay in seconds: ");
    scanf("%d", &delay);

    printf("Enter the authorization code: ");
    scanf("%s", authorization_code);

    printf("Enter the Discord channel ID: ");
    scanf("%s", channel_id);

    // Setting up URL with provided channel ID
    snprintf(url, sizeof(url), "https://discord.com/api/v9/channels/%s/messages", channel_id);

    CURL *curl;
    CURLcode res;

    struct curl_slist *headers = NULL;
    char auth_header[200];

    // Authorization header
    snprintf(auth_header, sizeof(auth_header), "Authorization: %s", authorization_code);
    headers = curl_slist_append(headers, auth_header);

    // Initialize libcurl
    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();
	
    if (curl) {
        for (int count = count_from + 1; count <= count_to; count++) {
            char post_data[50];
    snprintf(post_data, sizeof(post_data), "{\"content\": \"%d\"}", count);

    // Set curl options
    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, post_data);

    // Perform the request
    res = curl_easy_perform(curl);

    if (res != CURLE_OK) {
        fprintf(stderr, "Error with count %d: %s\n", count, curl_easy_strerror(res));
    } else {
        long response_code;
        curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
        printf("Res Status: %ld - %d\n", response_code, count);
    }

            // Delay in seconds
            sleep(delay);
        }

        // Clean up curl resources
        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();
    curl_slist_free_all(headers);

    return 0;
}

