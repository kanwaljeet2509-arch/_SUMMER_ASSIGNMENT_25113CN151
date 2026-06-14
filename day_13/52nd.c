#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,arr[100],even=0,odd=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    if(arr[i]%2==0)
    even++;
    else
    odd++;
    }
    printf("Number of even elements:%d\n",even);
    printf("Number of odd elements:%d\n",odd);
    return 0;
}