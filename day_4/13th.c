#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,a=0,b=1,c;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The fibonacci series:\n");
    for(i=1;i<=n;i++)
    {
    printf("%d\n",a);
    c=a+b;
    a=b;
    b=c;
    }
    return 0;
}