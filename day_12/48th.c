#include<stdio.h>
#include<stdlib.h>
int perfect(int n)
{
int i,sum=0;
for(i=1;i<n;i++)
{
if(n%i==0)
{
sum=sum+i;
}
}
if(sum==n)
return 1;
else
return 0;
}
int main()
{
int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(perfect(num))
    printf("%d is a perfect number",num);
    else
    printf("%d is not a perfect number",num);
    return 0;
}