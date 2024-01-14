#include <stdio.h>
int linearSearch(int arr[], int key, int i, int n) 
{
    if (i==n) 
    {
        return -1;
    }
    if (arr[i] == key) 
    {
        return i; 
    }
    return linearSearch(arr, key, i + 1, n);
}
int main() 
{
    int n,key;
    printf("Enter number of elemnts in an array:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter an element to be Searched:\n");
    scanf("%d",&key);

    int i = linearSearch(arr, key, 0, n);

    if (i != -1) {
        printf("Element %d found at index %d.\n", key, i);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
