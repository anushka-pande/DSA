#include<stdio.h>
int delete(int arr[],int n,int x)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            break;
        }
    }
    if(i<n)
    {
        for(j=i;j<n;j++)
        {
            arr[j]=arr[j+1];
        }
    }
    return n;
}
int main()
{
    int i,n,x;
    printf("Enter number of array elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of an array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be deleted:\n");
    scanf("%d",&x);
    delete(arr,n,x);
    n=n-1;
    printf("New Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}