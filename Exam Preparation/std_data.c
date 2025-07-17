#include <stdio.h>
#include <string.h>

struct StudentData
{
    char name[100];
    int roll;
    char address[100];
};

int main()
{
    struct StudentData std;
    printf("Enter your name: ");
    fgets(std.name, sizeof(std.name), stdin);
    std.name[strcspn(std.name, "\n")] = '\0';

    printf("Enter your roll number: ");
    scanf("%d", &std.roll);
    getchar();

    printf("Enter your address: ");
    fgets(std.address, sizeof(std.address), stdin);
    std.address[strcspn(std.address, "\n")] = '\0';

    // write file
    FILE *fptw = fopen("University.txt", "w");
    if (fptw == NULL)
    {
        printf("Error opening file");
        return 0;
    }
    size_t written = fprintf(fptw, "%s, %d, %s", std.name, std.roll, std.address);
    if (written > 0)
    {
        printf("Written Successfully! \n");
    }
    fclose(fptw);

    // read file
    FILE *fptr = fopen("University.txt", "r");
    if (fptr == NULL)
    {
        printf("Error opening file");
        return 0;
    }
    char line[300];
    struct StudentData loadStd;
    while (fgets(line, sizeof(line), fptr))
    {
        sscanf(line, "%[^,], %d, %[^\n]", loadStd.name, &loadStd.roll, loadStd.address);
    }
    printf("Data from File:\n");
    printf("Name: %s\n", loadStd.name);
    printf("Roll: %d\n", loadStd.roll);
    printf("Address: %s\n", loadStd.address);
    fclose(fptr);
    return 0;
}