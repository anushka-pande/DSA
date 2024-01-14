//To find Kth Largest and Smallest element in BST
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
};
struct Node *newNode(int item)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->key = item;
    node->left = node->right = NULL;
    return node;
}
int kthSmallest(struct Node *root, int k, int *count)
{
    if (root == NULL)
    {
        return -1;
    }
    int left = kthSmallest(root->left, k, count);
    if (left != -1)
    {
        return left;
    }
    (*count)++;
    if (*count == k)
    {
        return root->key;
    }
    return kthSmallest(root->right, k, count);
}
int kthLargest(struct Node *root, int k, int *count)
{
    if (root == NULL)
    {
        return -1;
    }
    int right = kthLargest(root->right, k, count);
    if (right != -1)
    {
        return right;
    }
    (*count)++;
    if (*count == k)
    {
        return root->key;
    }
    return kthLargest(root->left, k, count);
}
int main()
{
    struct Node *root = newNode(5);
    root->left = newNode(3);
    root->right = newNode(7);
    root->left->left = newNode(2);
    root->left->right = newNode(4);
    root->right->left = newNode(6);
    root->right->right = newNode(8);

    int k_smallest ;
    int k_largest ;
    printf("Enter the value of k for Kth Smallest and Largest elements respectively:\n");
    scanf("%d %d",&k_smallest,&k_largest);
    int count = 0;
    printf("Kth smallest element: %d\n", kthSmallest(root, k_smallest, &count));
    count = 0;
    printf("Kth largest element: %d\n", kthLargest(root, k_largest, &count));
    return 0;
}
