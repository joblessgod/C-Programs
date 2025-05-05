#include <stdio.h>
#include <stdlib.h>

#define MAX_USERS 100

typedef struct {
    int id;
    char username[50];
    char role[20];
    char password[50];
} User;

int loadUsers(const char *filename, User users[], int maxUsers) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return -1;
    }

    int count = 0;
    while (count < maxUsers && fscanf(fp, "%d %s %s %s",
           &users[count].id,
           users[count].username,
           users[count].role,
           users[count].password) == 4) {
        count++;
    }

    fclose(fp);
    return count;
}

int main() {
    User users[MAX_USERS];
    int userCount = loadUsers("users.txt", users, MAX_USERS);

    if (userCount >= 0) {
        printf("Loaded %d users:\n", userCount);
        for (int i = 0; i < userCount; i++) {
            printf("ID: %d, Username: %s, Role: %s, Password: %s\n",
                   users[i].id,
                   users[i].username,
                   users[i].role,
                   users[i].password);
        }
    }

    return 0;
}
