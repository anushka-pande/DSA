#include<stdio.h>
void sortArray(int arr[],int n)
{
    int low,mid,high,temp;
    low=0;
    mid=0;
    high=n-1;
    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:
            temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            low++;
            mid++;
            break;
            case 1:
            mid++;
            break;
            case 2:
            temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
            break;
        }
    }
}
int main()
{
    int i;
    int arr[]={1,0,1,2,0,0,2,1,0,2,1,2,0,1,2};
    int n= sizeof(arr) / sizeof(arr[0]);

    sortArray(arr,n);
     printf("Sorted Array:\n");
     for(i=0;i<n;i++)
     {
        printf("%d",arr[i]);
     }
     return 0;
}