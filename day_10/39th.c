#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j;
printf("Number pyramid:\n");
    for(i=1;i<=5;i++)
    {
    for(j=1;j<=5-i;j++)
    {
    printf(" ");
    }
    for(j=1;j<=i;j++)
    {
    printf("%d",j);
    }
    for(j=i-1;j>=1;j--)
    {
    printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}