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
    temp=arr[n-1];
    for(i=n-1;i>0;i--)
    {
    arr[i]=arr[i-1];
    }
    arr[0]=temp;
    printf("Right rotation of array:\n");
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
    return 0;
}