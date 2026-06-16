#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,arr[100],j,maxfreq=0,count,element;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    count=1;
    for(j=i+1;j<n;j++)
    {
    if(arr[i]==arr[j])
    {
    count++;
    }}
    if(count>maxfreq)
    {
    maxfreq=count;
    element=arr[i];
    }}
    printf("Element with max frequency:%d\n",element);
    printf("Frequency:%d\n",maxfreq);
    return 0;
}