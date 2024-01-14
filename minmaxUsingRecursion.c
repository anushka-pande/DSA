#include <stdio.h>
int Min(int arr[],int i, int n) 
{
    if (i == n - 1) 
    {
        return arr[i];
    }
    int min = Min(arr, i+ 1, n);
    return (arr[i] < min) * arr[i] + (arr[i] >= min) * min;
}
int Max(int arr[],int i, int n) 
{
    if (i == n - 1) 
    {
        return arr[i];
    }
    int max = Max(arr, i + 1, n);
    return (arr[i] > max) * arr[i] + (arr[i] <= max) * max;
}
int main() 
{
    int arr[] = {23, 45, 12, 67, 89, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = Min(arr,0, n);
    int max = Max(arr,0, n);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}