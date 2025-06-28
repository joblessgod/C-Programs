/* Question:
Write a C program that uses a structure to store details of a student (name, roll number, and marks), and then implement a function that displays the student details using structure as a parameter.
*/
#include <stdio.h>
#include <string.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

struct Student
{
	char name[100];
	int roll_number;
	float marks;
};

void displayStudent(struct Student s) {
	printf(GREEN "Student Details:\n" RESET);
	printf(CYAN "Name: %s\n" RESET, s.name);
	printf(CYAN "Roll Number: %d\n" RESET, s.roll_number);
	printf(CYAN "Marks: %.2f\n" RESET, s.marks);
}

int main(){
	struct Student s;

	printf("Enter student name: ");
	fgets(s.name, sizeof(s.name), stdin);
	// Remove trailing newline if present
	size_t len = strlen(s.name);
	if (len > 0 && s.name[len-1] == '\n') s.name[len-1] = '\0';

	printf("Enter roll number: ");
	scanf("%d", &s.roll_number);

	printf("Enter marks: ");
	scanf("%f", &s.marks);

	displayStudent(s);

	return 0;
}
