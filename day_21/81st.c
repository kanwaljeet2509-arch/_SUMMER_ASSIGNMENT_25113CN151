#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[50];
int len=0;
    printf("Enter a string:\n");
    scanf("%s",&str);
    while(str[len] !='\0')
    {
    len++;
    }
    printf("Length of string=%d\n",len);
    return 0;
}