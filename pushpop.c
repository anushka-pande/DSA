#include <stdio.h>
#include <stdlib.h>
int push(int stack[], int a)
{
    int n, top;
    if (top == n - 1)
    {
        printf("Stack is full");
    }
    else
    {
        printf("Enter element to push:\n");
        scanf("%d", &a);
        top = top + 1;
        stack[top] = a;
    }
    return 0;
}
int pop(int stack[])
{
    int top;
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Deleted element is %d", stack[top]);
        top = top - 1;
    }
    return 0;
}
void Top(int stack[])
{
    int top;
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Topmost element in stack is:%d\n", stack[top]);
    }
}
void display()
{
    int top, n, stack[n];
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d", stack[i]);
        }
    }
}
int main()
{
    int x, top = -1, n, stack[n], a;

    while (1)
    {
        printf("Enter your choice:\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            push(stack, a);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            Top(stack);
            break;
        case 4:
            display();
            break;
        }
    }
    return 0;
}