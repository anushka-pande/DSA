//Insertion in BST using recursion
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int key;
    struct Node* left;
    struct Node* right;
};
struct Node* newnode(int data)
{
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->key=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}
void Inorder(struct Node* node)
{
    if(node!=NULL)
    {
        Inorder(node->left);
        printf(" %d ",node->key);
        Inorder(node->right);
    }
}
struct Node* insert(struct Node* node,int key)
{
    if(node==NULL)
    {
        return newnode(key);
    }
    else if(key < node->key)
    {
        node->left=insert(node->left,key);
    }
    else if(key >node->key)
    {
        node->right=insert(node->right,key);
    }
    return node;
}
int main()
{
    struct Node* root=NULL;
    root=insert(root,5);
    insert(root,4);
    insert(root,3);
    insert(root,2);
    insert(root,6);
    insert(root,7);
    insert(root,8);

    printf("After Inserting a node in BST: ");
    Inorder(root);

    return 0;
}
