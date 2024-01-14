#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* newNode(int data)
{
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->data=data;
    node->next=NULL;
    return node;
}
void insertAtBegin(struct Node** head,int data)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=*head;
    if(*head!=NULL)
    {
        struct Node* last=*head;
        while(last->next!=*head)
        {
            last=last->next;
        }
        last->next=newNode;
    }
    else
    {
        newNode->next=newNode;
    }
    *head=newNode;
}
void display(struct Node* head)
{
    struct Node* temp=head;
    if(head != NULL)
    {
        do{
            printf(" %d ",temp->data);
            temp=temp->next;
        }while(temp!=head);
        printf("\n");
    }
}
int main()
{
    struct Node* head=NULL;
    insertAtBegin(&head,10);
    insertAtBegin(&head,20);
    insertAtBegin(&head,30);
    insertAtBegin(&head,40);
    
    printf("Circular Linked List: ");
    display(head);

    return 0;
}