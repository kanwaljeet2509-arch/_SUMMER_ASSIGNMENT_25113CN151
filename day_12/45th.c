#include<stdio.h>
#include<stdlib.h>
int palindrome(int n)
{
int orig=n,rev=0,rem;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(orig==rev)
return 1;
else
return 0;
}
int main()
{
int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(palindrome(num))
    printf("%d is a palindrome",num);
    else
    printf("%d is not a palindrome",num);
    return 0;
}