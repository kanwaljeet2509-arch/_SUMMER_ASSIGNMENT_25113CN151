#include <stdio.h>
int main()
{
int age;
printf("Enter your age:");
scanf("%d",&age);
if(age < 0)
{
printf("Invalid age\n");
}
else if(age >= 18)
{
printf("You are eligible to vote\n");
}
else
{
printf("You are not eligible to vote\n");
printf("You are eligible in %d year(s):",18 - age);
}
return 0;
}