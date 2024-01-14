#include<stdio.h>
int binarySearch(int arr[],int n,int x)
{
    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    int i,n,x;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Enter the element to be Searched:\n");
    scanf("%d",&x);
    int result=binarySearch(arr,n,x);
    if(result!=-1)
    {
        printf("Element %d found at %d index.\n",x,result);
    }
    else
    {
        printf("Element %d is not found in the array.\n",x);
    }
    return 0;
}