#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,n,i,result=1;
    printf("Enter the base:");
    scanf("%d",&x);
    printf("Enter the power:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    result=result*x;
    }
    printf("%d^%d=%d",x,n,result);
    return 0;
}