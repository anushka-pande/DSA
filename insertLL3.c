//To insert node at the end of linked list
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* insert(struct Node** head,int newdata)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->next=*head;
    *head=newnode;
    return *head;
}
void append(struct Node** head,int newdata)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=newdata;
    struct Node* last=*head;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head=newnode;
        return;
    }
    while(last->next !=NULL)
    {
        last=last->next;
    }
    last->next=newnode;
}
void printlist(struct Node* node)
{
   while(node != NULL)
   {
    printf(" %d ",node->data);
    node=node->next;
   } 
}
int main()
{
    struct Node* head=NULL;
    insert(&head,5);
    insert(&head,4);
    insert(&head,3);
    insert(&head,2);
    
    printf("Created linked list is: ");
    printlist(head);

    append(&head,1);
    printf("\nLinked list after inserting: ");
    printlist(head);
    
    return 0;
}