#include<stdio.h>
#include<stdlib.h>
int sum(int a,int b)
{
return a+b;
}
int main()
{
int n1,n2,summ;
    printf("Enter the numbers:");
    scanf("%d %d",&n1,&n2);
    summ=sum(n1,n2);
    printf("Sum=%d\n",summ);
    return 0;
}