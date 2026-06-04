#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i;
long long a=0,b=1,c;
    printf("Enter the value of number:");
    scanf("%d",&n);
    if(n==0)
    {
    printf("The %dth term of fibonacci is:%lld",n,a);
    }
    else if(n==1)
    {
    printf("The %dth term of fibonacci is:%lld",n,b);
    }
    else
    {
    
    for(i=2;i<=n;i++)
    {
    c=a+b;
    a=b;
    b=c;
    }
    printf("The %dth term of fibonacci is:%lld",n,b);
    }
    return 0;
}