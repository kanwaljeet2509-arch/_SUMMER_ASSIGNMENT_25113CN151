#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,j,isprime,y;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
    {
    isprime=1;
    if(i<2)
    {
    isprime=0;}
    else
    {
    for(j=2;j<i;j++)
    {
    if(i%j==0)
    {
    isprime=0;
    break;
    }
    }
    }
    if(isprime)
    y=i;
    }
    }
    printf("Largest prime factor of %d:%d",n,y);
    return 0;
}