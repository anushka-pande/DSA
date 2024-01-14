#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Stack {
    int top;
    int array[100];
};

void initStack(struct Stack *stack) {
    stack->top = -1;
}

int isEmpty(struct Stack *stack) {
    return (stack->top == -1);
}

int isFull(struct Stack *stack) {
    return (stack->top == 100 - 1);
}

void push(struct Stack *stack, int data) {
    if (isFull(stack)) {
        printf("Stack Overflow: Cannot push element, stack is full.\n");
        return;
    }
    stack->array[++stack->top] = data;
}

int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow: Cannot pop element, stack is empty.\n");
        return -1;
    }
    return stack->array[stack->top--];
}

int evaluatePostfix(char *expression) {
    struct Stack stack;
    initStack(&stack);

    int i = 0;
    while (expression[i] != '\0') {
        if (isdigit(expression[i])) {
            push(&stack, expression[i] - '0');
        } else {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);
            switch (expression[i]) {
                case '+':
                    push(&stack, operand1 + operand2);
                    break;
                case '-':
                    push(&stack, operand1 - operand2);
                    break;
                case '*':
                    push(&stack, operand1 * operand2);
                    break;
                case '/':
                    push(&stack, operand1 / operand2);
                    break;
            }
        }
        i++;
    }
    return pop(&stack);
}

int main() {
    char postfixExpression[] = "52+83-*";

    int result = evaluatePostfix(postfixExpression);
    printf("Result of evaluation: %d\n", result);

    return 0;
}
