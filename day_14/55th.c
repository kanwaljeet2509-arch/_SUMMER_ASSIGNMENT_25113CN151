#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,arr[100],largest,seclar;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    largest=seclar=arr[0];
    for(i=1;i<n;i++)
    {
    if(arr[i]>largest){
    seclar=largest;
    largest=arr[i];
    }
    else if(arr[i]>seclar && arr[i] != largest)
    {
    seclar=arr[i];
    }
    }
    printf("Largest element:%d\n",largest);
    printf("Second largest element:%d\n",seclar);
    return 0;
}