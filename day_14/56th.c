#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,arr[100],j;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Duplicate elements are:\n");
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
    if(arr[i]==arr[j])
    {
    printf("%d\n",arr[i]);
    break;
    }}}
    return 0;
}