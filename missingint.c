#include<stdio.h>
int missingnumber(int arr[],int n)
{
    int i,totalSum;
    totalSum=(n+1)*(n+2)/2;
    for(i=0;i<n;i++)
    {
        totalSum-=arr[i];
    }
    return totalSum;
}
int main()
{
    int n,i;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x=missingnumber(arr,n);
    printf("Missing number is:%d",x);
    return 0;
}