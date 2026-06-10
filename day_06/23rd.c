#include<stdio.h>
#include<stdlib.h>

int main()
{
int n, count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
    if(n%2==1)
    count++;
    n=n/2;
    }
    printf("Counting of set bits:%d",count);
    return 0;
}