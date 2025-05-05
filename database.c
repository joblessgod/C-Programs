#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_USERS 100

typedef struct {
    int id;
    char username[50];
    char role[20];
    char password[50];
} User;

// Validate ID: exactly 4 digits
int isValidID(int id) {
    return (id >= 1000 && id <= 9999);
}

// Validate username: 3 to 16 characters
int isValidUsername(const char *username) {
    int len = strlen(username);
    return (len >= 3 && len <= 16);
}

// Validate role: must be student/faculty/admin
int isValidRole(const char *role) {
    return strcmp(role, "student") == 0 ||
           strcmp(role, "faculty") == 0 ||
           strcmp(role, "admin") == 0;
}

// Validate password: 8 to 32 characters
int isValidPassword(const char *password) {
    int len = strlen(password);
    return (len >= 8 && len <= 32);
}

int saveUser(const char *filename, User newUser) {
    FILE *fp = fopen(filename, "a");
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

    printf("Enter ID (4-digit): ");
    scanf("%d", &newUser.id);
    if (!isValidID(newUser.id)) {
        fprintf(stderr, "❌ Error: ID must be exactly 4 digits.\n");
        return;
    }

    printf("Enter Username (3-16 chars): ");
    scanf("%s", newUser.username);
    if (!isValidUsername(newUser.username)) {
        fprintf(stderr, "❌ Error: Username must be between 3 and 16 characters.\n");
        return;
    }

    printf("Enter Role (student/faculty/admin): ");
    scanf("%s", newUser.role);
    if (!isValidRole(newUser.role)) {
        fprintf(stderr, "❌ Error: Role must be 'student', 'faculty', or 'admin'.\n");
        return;
    }

    printf("Enter Password (8-32 chars): ");
    scanf("%s", newUser.password);
    if (!isValidPassword(newUser.password)) {
        fprintf(stderr, "❌ Error: Password must be between 8 and 32 characters.\n");
        return;
    }

    if (saveUser(filename, newUser)) {
        printf("✅ User registered successfully!\n");
    } else {
        fprintf(stderr, "❌ Error: Failed to save user.\n");
    }
}

int main() {
    const char *filename = "users.txt";
    int choice;

    printf("1. Register New User\n2. Exit\nChoose: ");
    scanf("%d", &choice);

    if (choice == 1) {
        registerUser(filename);
    } else {
        printf("Goodbye!\n");
    }

    return 0;
}
