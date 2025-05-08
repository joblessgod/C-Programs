#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

void open_file(const char *filename) {
    int fd = open(filename, O_RDONLY);  // Try to open the file in read-only mode
    
    if (fd == -1) {  // If the file cannot be opened, an error occurs
        // Print the custom error message along with the error code and description
        perror("Error opening file");
        printf("Error code: %d\n", errno);
        printf("Error description: %s\n", strerror(errno));  // This shows the error string corresponding to the error number
    } else {
        printf("File '%s' opened successfully.\n", filename);
        close(fd);  // Close the file after opening
    }
}

int main() {
    const char *filename = "non_existent_file.txt";  // Non-existent file
    
    open_file(filename);  // Try to open the non-existent file
    
    return 0;
}
