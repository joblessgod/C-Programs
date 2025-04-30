#include <stdio.h>
#include <string.h>

struct Student {
    int roll_number;
    char name[50];
    int marks[5];
    int total_marks;
    float percentage;
    char grade;
};

int main() {
    struct Student student;
    int i;

    printf("Enter Roll Number: ");
    scanf("%d", &student.roll_number);
    printf("Enter Name: ");
    scanf(" %[^\n]s", student.name);

    printf("Enter marks for 5 subjects:\n");
    student.total_marks = 0;
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &student.marks[i]);
        student.total_marks += student.marks[i];
    }

    student.percentage = (float)student.total_marks / 5.0;

    if (student.percentage >= 90) {
        student.grade = 'A';
    } else if (student.percentage >= 80) {
        student.grade = 'B';
    } else if (student.percentage >= 70) {
        student.grade = 'C';
    } else if (student.percentage >= 60) {
        student.grade = 'D';
    } else {
        student.grade = 'F';
    }
    
    printf("\n");
    printf("-----------------------------------\n");
    printf("             MARKSHEET             \n");
    printf("-----------------------------------\n");
    printf("Roll Number: %d\n", student.roll_number);
    printf("Name: %s\n", student.name);
    printf("-----------------------------------\n");
    printf("Subjects           Marks\n");
    printf("-----------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d           %d\n", i + 1, student.marks[i]);
    }
    printf("-----------------------------------\n");
    printf("Total Marks: %d\n", student.total_marks);
    printf("Percentage: %.2f%%\n", student.percentage);
    printf("Grade: %c\n", student.grade);
    printf("-----------------------------------\n");

    return 0;
}