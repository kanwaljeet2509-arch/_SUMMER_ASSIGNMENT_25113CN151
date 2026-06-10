#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j;
printf("Character pyramid:\n");
    for(i=1;i<=5;i++)
    {
    for(j=1;j<=5-i;j++)
    {
    printf(" ");
    }
    for(j=0;j<i;j++)
    {
    printf("%c",65+j);
    }
    for(j=i-2;j>=0;j--)
    {
    printf("%c",65+j);
    }
    printf("\n");
    }
    return 0;
}