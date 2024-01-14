#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int KthLargest(int arr[], int n, int k) 
{
    bubbleSort(arr, n);
    return arr[n - k];
}

int KthSmallest(int arr[], int n, int k) 
{
    bubbleSort(arr, n);
    return arr[k - 1];
}

int main() 
{
    int n, k;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the value of k: ");
    scanf("%d", &k);

    printf("Array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Kth largest: %d\n", KthLargest(arr, n, k));
    printf("Kth smallest: %d\n", KthSmallest(arr, n, k));

    return 0;
}
