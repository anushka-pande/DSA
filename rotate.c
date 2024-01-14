#include<stdio.h>
void rotate(int arr[],int n)
{
    int i,last_element;
    last_element=arr[n-1];
    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=last_element;
}
int main()
{
    int i,n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    rotate(arr,n);
    printf("Rotated Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}