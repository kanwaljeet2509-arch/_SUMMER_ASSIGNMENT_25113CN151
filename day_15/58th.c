#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,arr[100],temp;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=0;i<n-1;i++)
    {
    arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    printf("Left rotation of array:\n");
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
    return 0;
}