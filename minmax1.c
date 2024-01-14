#include<stdio.h>
int selectionSort(int arr[],int n)
{
    int i,min,max;
    min=arr[0];
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return 0;
}
int main()
{
    int n,i,min,max;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    printf("Minimum element is:%d\n",min);
    printf("Maximum element is:%d\n",max);
    return 0;
}