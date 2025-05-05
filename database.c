#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int saveUser(const char *filename, User newUser) {
    FILE *fp = fopen(filename, "a");  // append mode
    if (fp == NULL) {
        perror("Error opening file to append");
        return 0;
    }

    fprintf(fp, "%d %s %s %s\n", newUser.id, newUser.username, newUser.role, newUser.password);
    fclose(fp);
    return 1;
}

void registerUser(const char *filename) {
    User newUser;

    printf("Enter ID: ");
    scanf("%d", &newUser.id);
    printf("Enter Username: ");
    scanf("%s", newUser.username);
    printf("Enter Role (student/faculty/admin): ");
    scanf("%s", newUser.role);
    printf("Enter Password: ");
    scanf("%s", newUser.password);

    if (saveUser(filename, newUser)) {
        printf("✅ User registered successfully!\n");
    } else {
        printf("❌ Error registering user.\n");
    }
}

int main() {
    const char *filename = "users.txt";
    User users[MAX_USERS];
    int choice;

    printf("1. Register New User\n2. View All Users\nChoose: ");
    scanf("%d", &choice);

    if (choice == 1) {
        registerUser(filename);
    } else if (choice == 2) {
        int userCount = loadUsers(filename, users, MAX_USERS);
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
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
