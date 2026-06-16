#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,arr[100],sum=0,tsum,missing;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n-1);
    for(i=0;i<n-1;i++)
    {
    scanf("%d",&arr[i]);
    sum+=arr[i];
    }
    tsum=n*(n+1)/2;
    missing=tsum-sum;
    printf("Missing number in array=%d\n",missing);
    return 0;
}