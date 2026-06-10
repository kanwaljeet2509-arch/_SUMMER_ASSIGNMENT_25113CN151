#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,i,rem,num,anum;
    printf("Enter the starting range number:");
    scanf("%d",&x);
    printf("Enter the ending range number:");
    scanf("%d",&y);
    printf("the armstrong numbers in range from %d to %d\n",x,y);
    for(i=x;i<=y;i++)
    {
    num=i;
    anum=0;
    while(num>0)
    {
    rem=num%10;
    anum=anum+(rem*rem*rem);
    num=num/10;
    }
    if(i==anum)
    {
    printf("Armstrong numbers:%d\n",i);
    }
    }
    return 0;
}