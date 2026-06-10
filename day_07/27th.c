#include<stdio.h>
#include<stdlib.h>
int Sum(int n)
{
if (n==0)
return 0;
else
return (n%10)+Sum(n/10);
}
int main()
{
int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Sum of digits of %d:%d",n,Sum(n));
    return 0;
}