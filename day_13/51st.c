#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,arr[100],smallest,largest;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    smallest=largest=arr[0];
    for(i=1;i<n;i++)
    {
    if(arr[i]<smallest)
    smallest=arr[i];
    if(arr[i]>largest)
    largest=arr[i];
    }
    printf("Smallest element:%d\n",smallest);
    printf("Largest element:%d\n",largest);
    return 0;
}