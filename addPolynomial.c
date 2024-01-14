//To add Polynomials using Linked List
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int coefficient;
    int exponent;
    struct Node *next;
};
struct Node *createNode(int coef, int exp)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->coefficient = coef;
    newNode->exponent = exp;
    newNode->next = NULL;
    return newNode;
}
void insertTerm(struct Node **poly, int coef, int exp)
{
    struct Node *temp = *poly;
    if (*poly == NULL || exp > temp->exponent)
    {
        struct Node *newNode = createNode(coef, exp);
        newNode->next = *poly;
        *poly = newNode;
    }
    else
    {
        while (temp->next != NULL && temp->next->exponent > exp)
        {
            temp = temp->next;
        }
        struct Node *newNode = createNode(coef, exp);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void display(struct Node *poly)
{
    while (poly != NULL)
    {
        printf("%dx^%d", poly->coefficient, poly->exponent);
        poly = poly->next;
        if (poly != NULL)
        {
            printf(" + ");
        }
    }
    printf("\n");
}
struct Node *addPolynomials(struct Node *poly1, struct Node *poly2)
{
    struct Node *result = NULL;

    while (poly1 != NULL && poly2 != NULL)
    {
        if (poly1->exponent > poly2->exponent)
        {
            insertTerm(&result, poly1->coefficient, poly1->exponent);
            poly1 = poly1->next;
        }
        else if (poly1->exponent < poly2->exponent)
        {
            insertTerm(&result, poly2->coefficient, poly2->exponent);
            poly2 = poly2->next;
        }
        else
        {
            int sum = poly1->coefficient + poly2->coefficient;
            if (sum != 0)
            {
                insertTerm(&result, sum, poly1->exponent);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    while (poly1 != NULL)
    {
        insertTerm(&result, poly1->coefficient, poly1->exponent);
        poly1 = poly1->next;
    }
    while (poly2 != NULL)
    {
        insertTerm(&result, poly2->coefficient, poly2->exponent);
        poly2 = poly2->next;
    }
    return result;
}
void freePoly(struct Node *poly)
{
    struct Node *temp;
    while (poly != NULL)
    {
        temp = poly;
        poly = poly->next;
        free(temp);
    }
}
int main()
{
    struct Node *poly1 = NULL;
    struct Node *poly2 = NULL;
    insertTerm(&poly1, 5, 2);
    insertTerm(&poly1, -3, 1);
    insertTerm(&poly1, 2, 0);

    insertTerm(&poly2, 3, 3);
    insertTerm(&poly2, 2, 2);
    insertTerm(&poly2, 1, 0);

    printf("Polynomial 1: ");
    display(poly1);

    printf("Polynomial 2: ");
    display(poly2);

    struct Node *result = addPolynomials(poly1, poly2);
    printf("Result: ");
    display(result);

    freePoly(poly1);
    freePoly(poly2);
    freePoly(result);

    return 0;
}
