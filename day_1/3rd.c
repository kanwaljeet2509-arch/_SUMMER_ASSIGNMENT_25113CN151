#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i;
unsigned long long fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0)
    {
    printf("ERROR");
    }
    else
    {
    for(i=1;i<=n;i++)
    {
    fact*=i;
    }
    printf("Factorial of %d=%llu\n",n,fact);
    }
    return 0;
}