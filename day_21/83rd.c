#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[50];
int i,vowels=0,consonants=0;
    printf("Enter a string:\n");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
    if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
    {
    if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ||
    str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    {
    vowels++;
    }
    else
    {
    consonants++;
    }}}
    printf("number of vowels=%d\n",vowels);
    printf("number of consonants=%d\n",consonants);
    return 0;
}