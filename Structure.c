#include<stdio.h>
struct Marks {
    int array[50];
    int sum;
};
int function(struct Marks *marks, int n);
int main() 
{
    struct Marks marks;
    int n;
    printf("Enter number of subjects:\n");
    scanf("%d", &n);
    marks.sum = function(&marks, n);
    printf("Sum of all marks: %d\n", marks.sum);
    return 0;
}
int function(struct Marks *marks, int n) 
{
    int i;
    int sum = 0;
    printf("Enter marks for each subject:\n");
    for (i = 0; i < n; i++) 
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &(marks->array[i]));
    }
    for (i = 0; i < n; i++) 
    {
        sum += marks->array[i];
    }
    return sum;
}
