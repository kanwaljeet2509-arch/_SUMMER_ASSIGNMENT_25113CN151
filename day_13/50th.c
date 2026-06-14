#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,arr[100],sum=0;
float avg;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    sum+=arr[i];
    }
    avg=(float)sum/n;
    printf("Sum=%d\n",sum);
    printf("Average=%.2f\n",avg);
    return 0;
}