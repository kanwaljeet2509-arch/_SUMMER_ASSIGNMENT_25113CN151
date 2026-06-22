#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[50];
int i,len=0,temp=1;
    printf("Enter a string:\n");
    scanf("%s",&str);
    while(str[len] !='\0')
    {
    len++;
    }
    for(i=0;i<len/2;i++)
    {
    if(str[i] !=str[len-1-i])
    {
    temp=0;
    break;
    }}
    if(temp)
    printf("The string is palindrome");
    else
    printf("The string is not palindrome");
    return 0;
}