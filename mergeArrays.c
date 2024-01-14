#include<stdio.h>
void merge(int a1[],int n,int a2[],int m,int a3[]) 
{
    int i,j,k;
    i=j=k=0;
    while(i<n && j<m) 
    {
        if(a1[i]<a2[j]) 
        {
            a3[k]=a1[i];
            i++;
        } 
        else 
        {
            a3[k]=a2[j];
            j++;
        }
        k++;
    }
    while(i<n) 
    {
        a3[k]=a1[i];
        i++;
        k++;
    }
    while(j<m) 
    {
        a3[k]=a2[j];
        j++;
        k++;
    }
}
int main() 
{
    int n,m;
    printf("Enter the size of array1:\n");
    scanf("%d",&n);
    printf("Enter %d elements for array1:\n",n);
    int a1[n];
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter the size of array2:\n");
    scanf("%d",&m);
    printf("Enter %d elements for array1:\n",m);
    int a2[m];
    for(int i=0;i<m;i++) 
    {
        scanf("%d",&a2[i]);
    }
    int l=n+m;
    int a3[l];
    merge(a1,n,a2,m,a3);
    printf("Merged array: ");
    for (int i=0;i<l;i++) 
    {
        printf("%d ",a3[i]);
    }
    return 0;
}
