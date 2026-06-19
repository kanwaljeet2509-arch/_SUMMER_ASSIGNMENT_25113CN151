#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[5][5],b[5][5],c[5][5];
int row,col,i,j;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&row,&col);
    printf("Enter elements of first matrix:\n");
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
    {
    scanf("%d",&a[i][j]);
    }}
    printf("Enter elements of second matrix:\n");
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
    {
    scanf("%d",&b[i][j]);
    }}
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
    {
    c[i][j]=a[i][j] + b[i][j];
    }}
    printf("Sum of matrices:\n");
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
    {
    printf("%d\n",c[i][j]);
    }
    }
    return 0;
}