//To insert node in a linked list at given node
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void insertafter(struct Node *prevnode, int newdata)
{
    if (prevnode == NULL)
    {
        printf("The given previous node cannot be NULL\n");
        return;
    }
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = newdata;
    newnode->next = prevnode->next;
    prevnode->next = newnode;
}
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

    printf("Created linked list is: ");
    printlist(head);

    insertafter(head, 1);
    printf("Linked list after inserting: ");
    printlist(head);

    return 0;
}
