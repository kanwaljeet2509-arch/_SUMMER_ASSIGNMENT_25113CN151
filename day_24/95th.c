#include<stdio.h>
#include<string.h>
int main()
{
char str[200],longest[50],word[50];
int i,j=0,max=0;
    printf("Enter a sentence:\n");
    fgets(str,sizeof(str),stdin);
    for(i=0;;i++)
    {
    if(str[i]!=' ' && str[i]!='\0' && str[i]!='\n')
    {
    word[j++]=str[i];
    }
    else
    {
    word[j]='\0';
    if(strlen(word)>max)
    {
    max=strlen(word);
    strcpy(longest,word);
    }
    j=0;
    if(str[i]=='\0' || str[i]=='\n')
    break;
    }}
    printf("Longest word:%s",longest);
    return 0;
}