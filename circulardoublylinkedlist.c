#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *newNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}
void insertAtBegin(struct Node **head, int data)
{
    struct Node *new_node = newNode(data);

    if (*head == NULL)
    {
        new_node->next = new_node;
        new_node->prev = new_node;
    }
    else
    {
        new_node->prev = (*head)->prev;
        new_node->next = *head;
        (*head)->prev->next = new_node;
        (*head)->prev = new_node;
    }

    *head = new_node;
}
void displayForward(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}
void displayBackward(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head->prev;
    do
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    } while (temp != head->prev);
    printf("\n");
}

int main()
{
    struct Node *head = NULL;
    insertAtBegin(&head, 10);
    insertAtBegin(&head, 20);
    insertAtBegin(&head, 30);
    insertAtBegin(&head, 40);

    printf("Circular Doubly Linked List (Forward): ");
    displayForward(head);

    printf("Circular Doubly Linked List (Backward): ");
    displayBackward(head);

    return 0;
}
