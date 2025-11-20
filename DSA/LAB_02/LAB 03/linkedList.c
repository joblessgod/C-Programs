#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *link;
};

struct Node *addAtBeg(struct Node *start, int data);
void display(struct Node *start);

int main()
{
    int choice, data;
    struct Node *start = NULL;

    while (1)
    {
        printf("\n===== Linked List Menu =====\n");
        printf("1. Insert at Beginning\n");
        printf("2. Display List\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("Enter the data to insert: ");
            scanf("%d", &data);
            start = addAtBeg(start, data);
            printf("Data inserted successfully!\n");
            break;
        }
        case 2:
        {
            display(start);
            break;
        }
        case 3:
            printf("fuck you\n");
            exit(1);
        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
        }
    }

    return 0;
}

struct Node *addAtBeg(struct Node *start, int data)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));

    temp->info = data;
    if (start == NULL)
    {
        temp->link = NULL;
        start = temp;
        return start;
    }

    temp->link = start;
    start = temp;
    return start;
}

void display(struct Node *start)
{
    struct Node *p = start;

    if (start == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    printf("Linked List: ");
    while (p != NULL)
    {
        printf("%d -> ", p->info);
        p = p->link;
    }
    printf("NULL\n");
}