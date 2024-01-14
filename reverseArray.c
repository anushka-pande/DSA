#include<stdio.h>
void reverseArray(int arr[],int n)
{
    int start,end,temp;
    start=0;
    end=n-1;
     while(start<end)
     {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
     }
}
     int main()
    {
        int arr[]={15,16,17,18,19};
        int n=sizeof(arr) / sizeof(arr[0]);
        int i;
         printf("Original Array:\n");
         for(i=0;i<n;i++)
         {
            printf("%d\t",arr[i]);
         }
         reverseArray(arr,n);
         printf("\nRversed Array is:\n");
         for(i=0;i<n;i++)
         {
            printf("%d\t",arr[i]);
         }
         return 0;
    }
