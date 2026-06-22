#include<stdio.h>
int main()
{
char str[500];
int i,j,count;
    printf("Enter a sentence:\n");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
    count=1;
    if(str[i]=='*')
    continue;
    for(j=i+1;str[j]!='\0';j++)
    {
    if(str[i]==str[j])
    {
    count++;
    str[j]='*';
    }}
    printf("%c=%d\n",str[i],count);
    }
    return 0;
}