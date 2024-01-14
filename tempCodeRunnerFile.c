#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void push(struct Node **head,int newdata)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->next=*head;
    *head=newnode;
}
void printlist(struct Node* head)
{
    struct Node* node=head;
    while(node!=NULL)
    {
        printf(" %d ",node->data);
        node=node->next;
    }
    printf(" ");
}
void merge(struct Node *p,struct Node **q)
{
    struct Node *p_current=p;
    struct Node *q_current=*q;
    struct Node *p_next,*q_next;
    while(p_current !=NULL && q_current!=NULL)
    {
        p_next=p_current->next;
        q_next=q_current->next;
        q_current->next=p_next;
        p_current->next=q_current;
        p_current=p_next;
        q_current=q_next;
    }
    *q=q_current;
}
int main()
{
    struct Node* p=NULL;
    struct Node* q=NULL;
    push(&p,3);
    push(&p,2);
    push(&p,1);
    printf("First Linked list: ");
    printlist(p);

    push(&q,8);
    push(&q,7);
    push(&q,6);
    push(&q,5);
    push(&q,4);
    printf("\nSecond Linked List: ");
    printlist(q);

    merge(p,&q);

    printf("\nModified First Linked List: ");
    printlist(p);
    printf("\nModified Second Linked List: ");
    printlist(q);

    return 0;
}