#include<stdio.h>
#include<stdlib.h>
long long fac(int n)
{
long long fact=1;
int i;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}
int main()
{
int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Factorial of %d=%lld",num,fac(num));
    return 0;
}