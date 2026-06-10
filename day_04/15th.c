#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int num,orig,rem,n=0;
double result=0.0;
    printf("Enter the Number:");
    scanf("%d",&num);
    orig=num;
    while(orig !=0)
    {
    orig/=10;
    n++;
    }
    orig=num;
    while(orig !=0)
    {
    rem=orig%10;
    result+=pow(rem,n);
    orig/=10;
    }
    if((int)result==num)
    {
    printf("%d is an armstrong number.",num);
    }
    else
    {
    printf("%d is not an armstrong number.",num);
    }
    return 0;
}