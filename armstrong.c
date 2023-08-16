//check if armstrong
#include<stdio.h>

void main()
{
    int n,temp,t,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        t=n%10;
        sum=sum+(t*t*t);
        n=n/10;
    }
    if(temp==sum)
    printf("it is armstrong");
    else
    printf("it is not armstrong");
}