#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,arr[5];
    printf("Enter the elements:\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    for(i=0;i<5;i++)
    {
    printf("%d",arr[i]);
    }
    return 0;
}