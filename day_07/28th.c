#include<stdio.h>
#include<stdlib.h>
int rev=0;
void revnum(int n)
{
if (n==0)
return;
rev=rev*10+(n%10);
revnum(n/10);
}
int main()
{
int n;
    printf("Enter the number:");
    scanf("%d",&n);
    revnum(n);
    printf("Reversed Number:%d",rev);
    return 0;
}