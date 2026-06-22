#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[50],rev[50];
int i,len=0;
    printf("Enter a string:\n");
    scanf("%s",&str);
    while(str[len] !='\0')
    {
    len++;
    }
    for(i=0;i<len;i++)
    {
    rev[i]=str[len-1-i];
    }
    rev[i]='\0';
    printf("Reversed string=%s",rev);
    return 0;
}