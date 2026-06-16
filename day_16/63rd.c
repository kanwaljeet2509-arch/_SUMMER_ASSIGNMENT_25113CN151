#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,arr[100],j,sum,temp=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter the required sum:\n");
    scanf("%d",&sum);
    for(i=0;i<n-1;i++)
    {
    for(j=i+1;j<n;j++)
    {
    if(arr[i]+arr[j]==sum)
    {
    printf("Pair found:%d and %d\n",arr[i],arr[j]);
    temp=1;
    }}}
    if(temp=0)
    {
    printf("No pair found");
    }
    return 0;
}