#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,arr[100],j,k;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
    if(arr[i]==arr[j])
    {
    for(k=j;k<n-1;k++)
    {
    arr[k]=arr[k+1];
    }
    n--;
    j--;
    }}}
    printf("Array after removing duplicates:\n");
    for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
    }
    return 0;
}