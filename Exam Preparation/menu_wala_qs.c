#include <stdio.h>

void showMenu()
{
    printf("1) Check the given number is even or odd\n");
    printf("2) Find the area of circle\n");
    printf("3) Area of rectangle\n");
    printf("4) Exit from program\n");
}

int main()
{
    showMenu();
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            if (num % 2 == 0) {
                printf("%d is even\n", num);
            } else {
                printf("%d is odd\n", num);
            }
            break;
        }
        case 2: {
            float radius;
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            float area = 3.14 * radius * radius;
            printf("Area of the circle: %.2f\n", area);
            break;
        }
        case 3: {
            float length, width;
            printf("Enter length and width of rectangle: ");
            scanf("%f %f", &length, &width); 
            float area = length * width;
            printf("Area of the rectangle: %.2f\n", area);
            break;
        }
        case 4:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}