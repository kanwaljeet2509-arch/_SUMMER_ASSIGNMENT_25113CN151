#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j;
printf("Character triangle:\n");
    for(i=1;i<=5;i++)
    {
    for(j=65;j<65+i;j++)
    {
    printf("%c",j);
    }
    printf("\n");
    }
    return 0;
}