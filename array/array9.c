//find the leaders of the given array
#include<stdio.h>
void main()
{
    int a[20],s,i,j,big;
    printf("\n enter size:");
    scanf("%d",&s);
    printf("enter the elements\n");
    for(i=0;i<s;i++)
    {
       printf("%d:",i+1) ;
        scanf("%d",&a[i]);
    }
    for(j=s-1;j>0;j--)
    {   
        big=a[j];
        for(i=j;i<s;i++)
        {
            if(a[i]>a[j])
            big=a[i];
        }
        if(big==a[j])
         printf("%d ",a[j]) ;
    }
    
}