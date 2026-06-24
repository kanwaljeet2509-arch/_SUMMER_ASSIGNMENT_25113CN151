#include<stdio.h>
int main()
{
char str[100];
int i,j,k;
    printf("Enter a string:\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
    j=i+1;
    while(str[j]!='\0')
    {
    if(str[i]==str[j])
    {
    for(k=j;str[k]!='\0';k++)
    {
    str[k]=str[k+1];
    }
    }
    else
    {
    j++;
    }}}
    printf("String after removing duplicates:%s",str);
    return 0;
}