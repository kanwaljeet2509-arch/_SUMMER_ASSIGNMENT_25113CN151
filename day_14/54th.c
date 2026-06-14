#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,arr[100],key,count=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter the element for which frequency is to be found:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
    if(arr[i]==key){
    count++;
    }}
    printf("Frequency of %d=%d\n",key,count);
    return 0;
}