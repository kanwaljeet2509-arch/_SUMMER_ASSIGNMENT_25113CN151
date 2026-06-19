#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[5][5],sum=0;
int n,i,j;
    printf("Enter the order of square matrix:\n");
    scanf("%d",&n);
    printf("Enter elements of matrix:\n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    scanf("%d",&a[i][j]);
    }}
    for(i=0;i<n;i++)
    {
    sum=sum + a[i][i];
    }
    printf("Sum of diagonal elements:%d\n",sum);
    return 0;
}