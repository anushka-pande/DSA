#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void leftview(struct Node* root)
{
    if (root == NULL)
    {
        return;
    }

    struct Node** queue = (struct Node**)malloc(sizeof(struct Node*) * 1000); // Adjust the size as needed
    int front, rear;
    front = rear = -1;
    queue[++rear] = root;
    struct Node* current_node = NULL;

    while (front != rear)
    {
        int size = rear - front;
        int i = 0;

        while (i++ < size)
        {
            current_node = queue[++front];

            if (i == 1)
            {
                printf("%d ", current_node->data);
            }

            if (current_node->left)
            {
                queue[++rear] = current_node->left;
            }
            if (current_node->right)
            {
                queue[++rear] = current_node->right;
            }
        }
    }

    free(queue);
}

int main()
{
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->left = newNode(8);
    root->right->left->right = newNode(9);

    leftview(root);

    return 0;
}
