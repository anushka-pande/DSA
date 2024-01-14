#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main()
{
    int i;
    int arr[]={34,21,74,18,22,58,0};
    int n= sizeof(arr) / sizeof(arr[0]);
    printf("Original Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
     bubbleSort(arr,n);
     
     printf("Sorted Array:\n");
     for(i=0;i<n;i++)
     {
        printf("%d\t",arr[i]);
     }
     return 0;
}