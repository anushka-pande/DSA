//To search a element in linked list
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int key;
    struct Node *next;
};
struct Node *insert(struct Node **head, int newkey)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->key = newkey;
    newnode->next = *head;
    *head = newnode;
}
int search(struct Node *head, int x)
{
    if (head == NULL)
    {
        return 0;
    }
    if (head->key == x)
    {
        return 1;
    }
    return search(head->next, x);
}
void printlist(struct Node *node)
{
    printf("Linked list: ");
    while (node != NULL)
    {
        printf(" %d ", node->key);
        node = node->next;
    }
    printf("\n");
}
int main()
{
    struct Node *head = NULL;
    int x;
    insert(&head, 210);
    insert(&head, 130);
    insert(&head, 112);
    insert(&head, 121);
    insert(&head, 74);

    printlist(head);

    printf("Enter element to be searched:\n");
    scanf("%d", &x);
    search(head, x) ? printf("YES") : printf("NO");
    return 0;
}