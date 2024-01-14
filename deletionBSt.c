#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int key;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int item) 
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key = item;
    node->left = NULL;
    node->right = NULL;
    return node;
}
void Inorder(struct Node* node) 
{
    if (node != NULL) 
    {
        Inorder(node->left);
        printf(" %d ", node->key);
        Inorder(node->right);
    }
}
struct Node* insert(struct Node* node, int key) 
{
    if (node == NULL) 
    {
        return newNode(key);
    } 
    else if (key < node->key) 
    {
        node->left = insert(node->left, key);
    } 
    else if (key > node->key) 
    {
        node->right = insert(node->right, key);
    } 
    else 
    {
        return node;
    }
    return node;
}

struct Node* deleteNode(struct Node* root, int k) 
{
    if (root == NULL) 
    {
        return root;
    } 
    else if (root->key > k) 
    {
        root->left = deleteNode(root->left, k);
        return root;
    } 
    else if (root->key < k) 
    {
        root->right = deleteNode(root->right, k);
        return root;
    } 
    else if (root->left == NULL) 
    {
        struct Node* node = root->right;
        free(root);
        return node;
    } 
    else if (root->right == NULL) 
    {
        struct Node* node = root->left;
        free(root);
        return node;
    } 
    else 
    {
        struct Node* Parent = root;
        struct Node* Successor = root->right;
        while (Successor->left != NULL) 
        {
            Parent = Successor;
            Successor = Successor->left;
        }
        if (Parent != root) 
        {
            Parent->left = Successor->right;
        } 
        else 
        {
            Parent->right = Successor->right;
        }
        root->key = Successor->key;
        free(Successor);
        root->right = deleteNode(root->right, Successor->key);
        return root;
    }
}
int main() 
{
    struct Node* root = NULL;
    root = insert(root, 15);
    root = insert(root, 13);
    root = insert(root, 12);
    root = insert(root, 14);
    root = insert(root, 17);
    root = insert(root, 16);

    printf("Original BST: ");
    Inorder(root);
    printf("\nDelete a leaf node: 12\n");
    root = deleteNode(root, 12);
    printf("Modified BST after deleting leaf node: ");
    Inorder(root);

    printf("\nDelete node with single child: 17\n");
    root = deleteNode(root, 17);
    printf("\nModified BST after deleting single child node:\n");
    Inorder(root);

    printf("\nDelete node with both child: 15\n");
    root = deleteNode(root, 15);
    printf("\nModified BST after deleting both child node:\n");
    Inorder(root);

    return 0;
}
