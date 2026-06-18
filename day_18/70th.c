#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,arr[100],i,j,temp,index;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
    index=i;
    for(j=i+1;j<n;j++)
    {
    if(arr[j]<arr[index])
    {
    index=j;
    }
    }
    temp=arr[i];
    arr[i]=arr[index];
    arr[index]=temp;
    }
    printf("Selection sort array:\n");
    for(i=0;i<n;i++)
    {
    printf("%d\n",arr[i]);
    }
    return 0;
}