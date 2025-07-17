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
    struct StudentData std[10];
    int stdLen = 2;
    for (int i = 0; i < stdLen; i++)
    {

        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter your name: ");
        fgets(std[i].name, sizeof(std[i].name), stdin);
        std[i].name[strcspn(std[i].name, "\n")] = '\0';

        printf("Enter your roll number: ");
        scanf("%d", &std[i].roll);
        getchar();

        printf("Enter your address: ");
        fgets(std[i].address, sizeof(std[i].address), stdin);
    }
    // write file
    FILE *fptw = fopen("University.txt", "a+");
    if (fptw == NULL)
    {
        printf("Error opening file");
        return 0;
    }
    for (int i = 0; i < stdLen; i++)
    {
        size_t written = fprintf(fptw, "%s, %d, %s", std[i].name, std[i].roll, std[i].address);
    }
    fclose(fptw);
    printf("Written Successfully! \n");

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
    
    printf("\n--- Records from file ---\n");
    printf("Name: %s\n", loadStd.name);
    printf("Roll: %d\n", loadStd.roll);
    printf("Address: %s\n", loadStd.address);
    }
    fclose(fptr);
    return 0;
}