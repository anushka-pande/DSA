//To reverse a linked list
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *reverse(struct Node **head)
{
    struct Node *prev = NULL;
    struct Node *current = *head;
    struct Node *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
    return *head;
}
struct Node *insert(struct Node **head, int newdata)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = newdata;
    newnode->next = *head;
    *head = newnode;
    return *head;
}
void printlist(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
int main()
{
    struct Node *head = NULL;

    insert(&head, 120);
    insert(&head, 140);
    insert(&head, 150);
    insert(&head, 180);

    printf("Given linked list: ");
    printlist(head);

    reverse(&head);

    printf("\nReversed linked list: ");
    printlist(head);

    return 0;
}