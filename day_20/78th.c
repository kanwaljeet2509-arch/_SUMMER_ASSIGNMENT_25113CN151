#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,j,temp=1;
    printf("Enter the order of square matrix:\n");
    scanf("%d",&n);
int a[n][n];    
    printf("Enter elements of matrix:\n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    scanf("%d",&a[i][j]);
    }}
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    if(a[i][j]!=a[j][i])
    {
    temp=0;
    break;
    }}
    if(temp==0)
    break;
    }
    if(temp)
    printf("The matrix is symmetric.\n");
    else
    printf("The matrix is not symmetric.\n");
    return 0;
}