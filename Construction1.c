#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left; 
    struct Node *right;
};
int search(int arr[], int start, int end, int value)
{
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}
struct Node *buildTree(int preorder[], int inorder[], int inStart, int inEnd)
{
    static int preIndex = 0;
    if (inStart > inEnd)
    {
        return NULL;
    }
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = preorder[preIndex++];
    newNode->left = NULL;
    newNode->right = NULL;
    if (inStart == inEnd)
    {
        return newNode;
    }
    int inIndex = search(inorder, inStart, inEnd, newNode->data);
    newNode->left = buildTree(preorder, inorder, inStart, inIndex - 1);
    newNode->right = buildTree(preorder, inorder, inIndex + 1, inEnd);
    return newNode;
}
void Inorder(struct Node *node)
{
    if (node != NULL)
    {
        Inorder(node->left);
        printf("%d ", node->data);
        Inorder(node->right);
    }
}
int main()
{
    int inorder[] = {4, 2, 5, 1, 3};
    int preorder[] = {1, 2, 4, 5, 3};

    int n = sizeof(inorder) / sizeof(inorder[0]);

    struct Node *root = buildTree(preorder, inorder, 0, n - 1);

    printf("Inorder traversal of the constructed tree: ");
    Inorder(root);

    return 0;
}
