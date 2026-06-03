#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,i,j,isprime;
    printf("Enter the starting number in a range:");
    scanf("%d",&x);
    printf("Enter the ending number in a range:");
    scanf("%d",&y);
    printf("Prime numbers between %d and %d are:\n",x,y);
    for(i=x;i<=y;i++)
    {
    if(i<2)
    continue;
    isprime=1;
    for(j=2;j<=i/2;j++)
    {
    if(i%j==0)
    {
    isprime=0;
    break;
    }
    }
    if(isprime)
    printf("%d\n",i);
    }
    return 0;
}