#include<stdio.h>
#include<ctype.h>
char stack[100];
int top = -1;
void push(char operator)
{
    stack[++top] = operator;
}
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
int priority(char operator)
{
    if(operator == '(')
        return 0;
    if(operator == '+' || operator == '-')
        return 1;
    if(operator == '*' || operator == '/')
        return 2;
    return 0;
}
int main()
{
    char exp[100];
    char *e, operator;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;    
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((operator = pop()) != '(')
                printf("%c ", operator);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}
