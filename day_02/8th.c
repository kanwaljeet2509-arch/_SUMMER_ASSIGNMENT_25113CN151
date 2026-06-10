#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,r,rev=0,original;
    printf("Enter the number");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
    }
    if(original==rev)
    printf("%d is palindrome",original);
    else
    printf("%d is not palindrome",original);
    return 0;
}