#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j;
printf("Hollow square pattern:\n");
    for(i=1;i<=5;i++)
    {
    for(j=1;j<=5;j++)
    {
    if(i==1 || i==5 || j==1 ||j==5)
    printf("*");
    else
    printf(" ");
    }
    printf("\n");
    }
    return 0;
}