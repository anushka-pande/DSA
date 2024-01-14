#include<stdio.h>
int pairs(int arr[],int n,int K)
{
    int i,j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==K)
            {
                count+=1;
            }
        }
    }
    return count;
}
int main()
{
    int i,n,K;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum i.e., value of K");
    scanf("%d",&K);

    printf("Count of pairs with sum %d is %d",K,pairs(arr,n,K));
    return 0;
}