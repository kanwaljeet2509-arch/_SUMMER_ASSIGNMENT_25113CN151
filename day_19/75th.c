#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[5][5],transpose[5][5];
int row,col,i,j;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&row,&col);
    printf("Enter elements of matrix:\n");
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
    {
    scanf("%d",&a[i][j]);
    }}
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
    {
    transpose[j][i]=a[i][j];
    }}
    printf("Transpose of matrix:\n");
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
    {
    printf("%d\n",transpose[i][j]);
    }
    }
    return 0;
}