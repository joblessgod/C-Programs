#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// User structure
struct User
{
    char fullName[100];
    char email[100];
    char phone[20];
    char role[20];
    char password[100];
};

// Save user as JSON
void saveUserAsJson(struct User user, FILE *fp)
{
    fprintf(fp, "{\n");
    fprintf(fp, "  \"fullName\": \"%s\",\n", user.fullName);
    fprintf(fp, "  \"email\": \"%s\",\n", user.email);
    fprintf(fp, "  \"phone\": \"%s\",\n", user.phone);
    fprintf(fp, "  \"role\": \"%s\",\n", user.role);
    fprintf(fp, "  \"password\": \"%s\"\n", user.password); // no comma at the end
    fprintf(fp, "}\n");
}

// Load user from JSON
void loadUserFromJson(struct User *user, FILE *fp)
{
    char line[256];

    while (fgets(line, sizeof(line), fp))
    {
        if (strstr(line, "\"fullName\""))
            sscanf(line, " \"fullName\": \"%[^\"]\"", user->fullName);
        else if (strstr(line, "\"email\""))
            sscanf(line, " \"email\": \"%[^\"]\"", user->email);
        else if (strstr(line, "\"phone\""))
            sscanf(line, " \"phone\": \"%[^\"]\"", user->phone);
        else if (strstr(line, "\"role\""))
            sscanf(line, " \"role\": \"%[^\"]\"", user->role);
        else if (strstr(line, "\"password\""))
            sscanf(line, " \"password\": \"%[^\"]\"", user->password);
    }
}

// Main function
int main()
{
    struct User user = {
        "John Doe",
        "john.doe@example.com",
        "+1234567890",
        "Student",
        "securePassword123"};

    // Save to file
    FILE *fp;
    // fopen("user.json", "w");
    // if (fp == NULL)
    // {
    //     perror("Error opening file for writing");
    //     return 1;
    // }
    // saveUserAsJson(user, fp);
    // fclose(fp);
    // printf("User saved to JSON file.\n");

    // Load from file
    struct User loadedUser;
    fp = fopen("user.json", "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
     loadUserFromJson(&loadedUser, fp);
     fclose(fp);

    // Display loaded user
    printf("\n\t\tLoaded User\n");
    printf("Full Name: %s\n", loadedUser.fullName);
    printf("Email: %s\n", loadedUser.email);
    printf("Phone: %s\n", loadedUser.phone);
    printf("Role: %s\n", loadedUser.role);
    printf("Password: %s\n", loadedUser.password);

    return 0;
}