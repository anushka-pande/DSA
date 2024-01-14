#include<stdio.h>
int main()
{
    int n,i,count=0,t;

    printf("Enter number of elements of an array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of an array:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Enter a integer whose occurance is to be found:\n");
    scanf("%d",&t);

    for(i=0;i<n;i++)
    {
        if(arr[i]==t)
        {
            count++;
        }
    }
     printf("The integer %d occurs %d times in an array.\n",t,count);
    return 0;
}