#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *Left;
    struct Node *Right;
};

// Function to create a new node with user input
struct Node *creatNode() {
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    if (!newnode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    printf("\nEnter the data: ");
    scanf("%d", &newnode->data);
    newnode->Left = NULL;
    newnode->Right = NULL;
    return newnode;
}

// In-order traversal
void inorder(struct Node *root) {
    if (root != NULL) {
        inorder(root->Left);
        printf("%d ", root->data);
        inorder(root->Right);
    }
}

int main() {
    struct Node *Root = NULL;

    for (int i = 0; i < 9; i++) {
        struct Node *newnode = creatNode();

        if (Root == NULL) {
            Root = newnode;
        } else {
            struct Node *ptr = Root;
            struct Node *parent = NULL;

            while (ptr != NULL) {
                parent = ptr;
                if (newnode->data < ptr->data)
                    ptr = ptr->Left;
                else
                    ptr = ptr->Right;
            }

            if (newnode->data < parent->data)
                parent->Left = newnode;
            else
                parent->Right = newnode;
        }
    }

    printf("\nIn-order traversal of the tree: ");
    inorder(Root);
    printf("\n");

    return 0;
}
