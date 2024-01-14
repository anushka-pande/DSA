#include<stdio.h>
void SubArraySum(int arr[],int n,int Sum)
{
    int currentSum=0,i,j;
    for(i=0;i<n;i++)
    {
        currentSum=arr[i];
        if(currentSum==Sum)
        {
            printf("Sum found from index %d to %d\n",i,j);
            return;
        }
        else
        {
            for(j=i+1;j<n;j++)
            {
                currentSum+=arr[j];
                if(currentSum==Sum)
                {
                    printf("Sum found from index %d to %d\n",i,j);
                    return;
                }
            }
        }
    }
    printf("Subarray with %d Sum not found.\n",Sum);
    return;
}
int main()
{
    int k,n,Sum;
    printf("Enter number of elements in an array;\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of an array:\n",n);
    for(k=0;k<n;k++)
    {
    scanf("%d",&arr[k]);
    }
    printf("\n");
    printf("Enter the Sum whose subarray is to be found:\n");
    scanf("%d",&Sum);
     SubArraySum(arr,n,Sum);
    return 0;
}