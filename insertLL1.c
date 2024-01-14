//To insert node in a linked list at beginning 
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *insert(struct Node **head, int newdata)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newdata;
    newNode->next = *head;
    *head = newNode;
    return *head;
}
void printlist(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
    printf("\n");
}
int main()
{
    struct Node *head = NULL;
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);
    printf("Linked list : ");
    printlist(head);
    return 0;
}