#include <stdio.h>
int binarySearch(int arr[], int start, int end, int key) 
{
    if (start <= end) 
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) 
        {
            return mid;
        } 
        else if (arr[mid] > key) 
        {
            return binarySearch(arr, start, mid - 1, key);
        } 
        else 
        {
            return binarySearch(arr, mid + 1, end, key);
        }
    }
    return -1;
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

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1) 
    {
        printf("Element not found\n");
    } 
    else 
    {
        printf("Element found at index: %d\n", result);
    }
    return 0;
}
