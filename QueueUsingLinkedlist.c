#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Queue
{
    struct Node *front, *rear;
};
struct Node *newNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}
struct Queue *createQueue()
{
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}
int isEmpty(struct Queue *queue)
{
    return (queue->front == NULL);
}
void enqueue(struct Queue *queue, int data)
{
    struct Node *node = newNode(data);
    if (isEmpty(queue))
    {
        queue->front = queue->rear = node;
        printf("%d enqueued to queue\n", data);
        return;
    }
    queue->rear->next = node;
    queue->rear = node;
    printf("%d enqueued to queue\n", data);
}
int dequeue(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty\n");
        return -1;
    }
    struct Node *temp = queue->front;
    int dequeued = temp->data;
    queue->front = queue->front->next;
    if (queue->front == NULL)
    {
        queue->rear = NULL;
    }

    free(temp);
    return dequeued;
}
int front(struct Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty\n");
        return -1;
    }
    return queue->front->data;
}
int main()
{
    struct Queue *queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    printf("%d dequeued from queue\n", dequeue(queue));

    printf("Front element is %d\n", front(queue));

    return 0;
}
