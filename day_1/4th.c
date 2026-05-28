#include<stdio.h>
#include<stdlib.h>

int main()
{
long long n;
int count=0;
    printf("Enter the number:");
    scanf("%lld",&n);
    while(n!=0)
    {
    n/=10;
    ++count;
    }
    printf("Digits in number:%d",count);
    return 0;
}