#include<stdio.h>
#include<stdlib.h>
long long fact(int n)
{
if(n==0 || n==1)
return 1;
else
return n*fact(n-1);
}
int main()
{
int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<0)
    {
    printf("Factorial not defined.\n");
    }
    else
    {
    printf("Factorial of %d=%lld",num,fact(num));
    }
    return 0;
}