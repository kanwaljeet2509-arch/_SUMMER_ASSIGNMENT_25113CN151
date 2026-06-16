#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,arr[100],temp,j=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    if(arr[i]!=0)
    {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    j++;
    }}
    printf("Array after moving zeroes to the end:\n");
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
    return 0;
}