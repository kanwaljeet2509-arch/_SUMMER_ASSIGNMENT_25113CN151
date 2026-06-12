#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{
if(a>b)
return a;
else
return b;
}
int main()
{
int n1,n2,maxx;
    printf("Enter the numbers:");
    scanf("%d %d",&n1,&n2);
    maxx=max(n1,n2);
    printf("Maximum=%d\n",maxx);
    return 0;
}