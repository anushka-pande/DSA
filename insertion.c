#include <stdio.h>
void insert(int arr[], int *n, int pos, int x) 
{
    int i;
    for (i=*n;i>pos;i--) 
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=x;
    (*n)++;
}
int main() 
{
    int n,i,pos,x;  
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for (i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d",&x);
    printf("Enter the position where you want to insert: ");
    scanf("%d",&pos);
    insert(arr,&n,pos,x);
    printf("New array:\n");
    for (i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
