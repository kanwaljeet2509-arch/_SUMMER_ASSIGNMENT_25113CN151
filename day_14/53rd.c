#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,arr[100],key,found=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
    if(arr[i]==key){
    printf("Element found at position: %d\n",i+1);
    found=1;
    break;
    }}
    if(found==0)
    printf("Element not found");
    return 0;
}