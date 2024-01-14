#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Structure for the stack
struct Stack {
    int top;
    int array[100];
};

// Function to initialize the stack
void initStack(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return (stack->top == -1);
}

// Function to push an element onto the stack
void push(struct Stack *stack, int data) {
    if (stack->top == 100 - 1) {
        printf("Stack Overflow: Cannot push element, stack is full.\n");
        return;
    }
    stack->array[++stack->top] = data;
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow: Cannot pop element, stack is empty.\n");
        return -1;
    }
    return stack->array[stack->top--];
}

// Function to get the top element of the stack without popping it
int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return -1;
    }
    return stack->array[stack->top];
}

// Function to perform arithmetic operations
int performOperation(int operand1, int operand2, char operator) {
    switch (operator) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand1 / operand2;
        default:
            return 0;
    }
}

// Function to evaluate the expression
int evaluateExpression(char *expression) {
    struct Stack stack;
    initStack(&stack);

    int length = strlen(expression);

    for (int i = 0; i < length; i++) {
        if (isdigit(expression[i])) {
            push(&stack, expression[i] - '0');
        } else {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);
            int result = performOperation(operand1, operand2, expression[i]);
            push(&stack, result);
        }
    }
    return pop(&stack);
}

int main() {
    char expression[100];

    printf("Enter an arithmetic expression (without spaces): ");
    scanf("%s", expression);

    int result = evaluateExpression(expression);
    printf("Result: %d\n", result);

    return 0;
}
