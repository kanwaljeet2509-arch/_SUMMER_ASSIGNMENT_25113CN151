#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[50];
int i;
    printf("Enter a string:\n");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
    if((str[i]>='a' && str[i]<='z'))
    {
    str[i]=str[i] - 32;
    }}
    printf("Lowercase to uppercase=%s",str);
    return 0;
}