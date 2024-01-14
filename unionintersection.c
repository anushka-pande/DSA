#include<stdio.h>
void Union(int arr1[],int arr2[],int m,int n)
{
    int i=0,j=0;
    printf("Union of two Arrays:\n");
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            printf("%d\t",arr1[i++]);
        }
        else if(arr1[i]>arr2[j])
        {
            printf("%d\t",arr2[j++]);
        }
        else
        {
            printf("%d\t",arr1[i++]);
            j++;
        }
    }
    while(i<m)
    {
        printf("%d\t",arr1[i++]);
    }
    while(j<n)
    {
        printf("%d\t",arr2[j++]);
    }
}
void Intersection(int arr1[],int arr2[],int m,int n)
{
    int i=0,j=0;
    printf("\nIntersection of two Arrays:\n");
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            printf("%d\t",arr1[i]);
            i++;
            j++;
        }
    }
}
int main()
{
    int m,n,i,j;

    printf("Enter the number of elements of Array1:\n");
    scanf("%d",&m);
    int arr1[m];
    printf("Enter the elements of Array 1:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the number of elements of Array2:\n");
    scanf("%d",&n);
    int arr2[n];
    printf("Enter the elements of Array 2:\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr2[j]);
    }

    Union(arr1,arr2,m,m);
    Intersection(arr1,arr2,m,n);

    return 0;
}