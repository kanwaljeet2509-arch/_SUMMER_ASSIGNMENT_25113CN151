#include<stdio.h>
#include<stdlib.h>

int main()
{
long long binary;
int d=0,b=1,rem;
    printf("Enter the binary number:");
    scanf("%lld",&binary);
    while(binary>0)
    {
    rem=binary%10;
    d+=rem*b;
    b*=2;
    binary/=10;
    }
    printf("Decimal number:%d",d);
    return 0;
}