#include <stdio.h>
int peak(int arr[],int n)
{
    int i;
    if(n==1)
{
    return arr[0];
}
    if(arr[0]>=arr[1])
{
    return arr[0];
}
    if(arr[n-1]>=arr[n-2])
{
    return arr[n -1];
}
    for(i = 1;i<n-1;i++) 
{
    if(arr[i]>= arr[i-1] && arr[i]>=arr[i+1])
{
    return arr[i];
}
}
return -1;
}
int main() 
{
    int arr[] = {21,14,8,11,12,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int peakelement = peak(arr, n);
    if (peakelement != -1)
{
    printf("A peak element is: %d\n", peakelement);
}
else
{
    printf("No peak element found\n");
}
return 0;
}