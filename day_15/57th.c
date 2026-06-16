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
    for(i=0;i<n/2;i++)
    {
    temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
    }
    printf("Reversed array:\n");
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
    return 0;
}