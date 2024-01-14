#include <stdio.h>

void Search(int arr[], int n, int x)
{
    int i;
    int found = 0; 

    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("Element is found at index: %d", i);
            found = 1; 
            break;     
        }
    }
    if (!found)
    {
        printf("Element not found");
    }
}
int main()
{
    int n, x, i;
    printf("Enter number of elements of array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element which is to be found:\n");
    scanf("%d", &x);
    Search(arr, n, x);
    return 0;
}
