#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j;
printf("Repeated number triangle:\n");
    for(i=1;i<=5;i++)
    {
    for(j=1;j<=i;j++)
    {
    printf("%d",i);
    }
    printf("\n");
    }
    return 0;
}