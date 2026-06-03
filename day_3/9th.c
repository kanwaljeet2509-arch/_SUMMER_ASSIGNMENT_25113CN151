#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,n,prime=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<=n/i;i++)
    {
    if(n%i==0)
    {
    prime=0;
    break;
    }}
    if(prime==1)
    {
    printf("Number is Prime");
    }
    else
    {
    printf("Number is not Prime");
    }
    return 0;
}