#include<stdio.h>
#include<stdlib.h>

int main()
{
int r,c,i,j,sum;
    printf("Enter rows and column of matrix:\n");
    scanf("%d%d",&r,&c);
int a[r][c];    
    printf("Enter elements of matrix:\n");
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
    scanf("%d",&a[i][j]);
    }}
    printf("Column-wise sum are:\n");
    for(j=0;j<c;j++)
    {
    sum=0;
    for(i=0;i<r;i++)
    {
    sum+=a[i][j];
    }
    printf("Sum of column %d=%d\n",j+1,sum);
    }
    return 0;
}