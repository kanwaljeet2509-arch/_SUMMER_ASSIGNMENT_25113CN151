#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j;
printf("Repeated character triangle:\n");
    for(i=65;i<65+5;i++)
    {
    for(j=65;j<=i;j++)
    {
    printf("%c",i);
    }
    printf("\n");
    }
    return 0;
}