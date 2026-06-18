#include<stdio.h>
#include<stdlib.h>

int main()
{
int n1,n2,arr1[100],arr2[100],unionarr[200],i,j,k=0,temp;
    printf("Enter the number of elements of first array:\n");
    scanf("%d",&n1);
    printf("Enter elements:\n");
    for(i=0;i<n1;i++)
    {
    scanf("%d",&arr1[i]);
    unionarr[k++]=arr1[i];
    }
    printf("Enter the number of elements of second array:\n");
    scanf("%d",&n2);
    printf("Enter elements:\n");
    for(i=0;i<n2;i++)
    {
    scanf("%d",&arr2[i]);
    }
    for(i=0;i<n2;i++)
    {
    temp=0;
    for(j=0;j<k;j++)
    {
    if(arr2[i]==unionarr[j])
    {
    temp=1;
    break;
    }
    }
    if(temp==0)
    {
    unionarr[k++]=arr2[i];
    }
    }
    printf("Union of arrays:\n");
    for(i=0;i<k;i++)
    {
    printf("%d",unionarr[i]);
    }
    return 0;
}