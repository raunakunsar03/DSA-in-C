#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *creatNode()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data : ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    return newNode;
}

int main()
{
    struct Node *start = NULL, *ptr1 = NULL;
    int n;
    printf("Enter the Size of Singly Linked List : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        struct Node *newNode = creatNode();
        if (i == 0)
        {
            start = newNode;
            ptr1 = start;
            printf("Start=%d\n", start);
            printf("ptr1=%d\n", ptr1);
        }
        else
        {
            ptr1->next = newNode;
            ptr1 = newNode;
            printf("ptr1=%d\n", ptr1);
            printf("newNode=%d\n", ptr1);
        }
    }
    struct Node *ptr;
    ptr = start;
    printf("ptr=%d\n", ptr);
    printf("Display Singly Link List : ");
    while (ptr != NULL)
    {
        printf("| %d |", ptr->data);
        printf("| %d | ->", ptr->next);
        ptr = ptr->next;
    }
}