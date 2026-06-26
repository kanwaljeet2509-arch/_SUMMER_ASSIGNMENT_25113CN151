#include<stdio.h>
#include<stdlib.h>

int main()
{
int n1,n2,i,j,k;
    printf("Enter the number of elements of first array:\n");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter elements:\n");
    for(i=0;i<n1;i++)
    {
    scanf("%d",&arr1[i]);
    }
    printf("Enter the number of elements of second array:\n");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter elements:\n");
    for(i=0;i<n2;i++)
    {
    scanf("%d",&arr2[i]);
    }
    int arr3[n1+n2];
    i=0;
    j=0;
    k=0;
    while(i<n1 && j<n2)
    {
    if(arr1[i]<arr2[j])
    arr3[k++]=arr1[i++];
    else
    arr3[k++]=arr2[j++];
    }
    while(i<n1)
    arr3[k++]=arr1[i++];
    while(j<n2)
    arr3[k++]=arr2[j++];
    printf("Merged array:\n");
    for(i=0;i<n1+n2;i++)
    {
    printf("%d",arr3[i]);
    }
    return 0;
}