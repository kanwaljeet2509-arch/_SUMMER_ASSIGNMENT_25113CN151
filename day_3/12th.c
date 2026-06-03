#include<stdio.h>
#include<stdlib.h>

int main()
{
int n1,n2,temp,lcm,a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    a=n1;
    b=n2;
    while(b !=0)
    {
    temp=b;
    b=a%b;
    a=temp;
    }
    lcm=(n1 * n2)/a;
    printf("LCM:%d\n",lcm);
    return 0;
}