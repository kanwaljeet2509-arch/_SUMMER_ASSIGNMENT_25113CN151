#include<stdio.h>
#include<stdlib.h>
//To check 3 digit armstrong number.
int armstrong(int n)
{
int orig=n,rem,sum=0;
while(n!=0)
{
rem=n%10;
sum=sum+(rem*rem*rem);
n=n/10;
}
if(orig==sum)
return 1;
else
return 0;
}
int main()
{
int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(armstrong(num))
    printf("%d is an armstrong number",num);
    else
    printf("%d is not an armstrong number",num);
    return 0;
}