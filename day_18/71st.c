#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,arr[100],i,key,low,high,mid,temp=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter element to search\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
    mid=(low+high)/2;
    if(arr[mid]==key)
    {
    temp=1;
    break;
    }
    else if(arr[mid]<key)
    {
    low=mid+1;
    }
    else
    {
    high=mid-1;
    }
    }
    if(temp)
    printf("Element found at position:%d\n",mid+1);
    else
    printf("Element not found\n");
    return 0;
}