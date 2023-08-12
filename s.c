//program to express a number as sum of 2 prime numbers
#include<stdio.h>
int prime (int n)
{
if(n==1)
return 1;
if(n<0)
return 1;//negative num
  for(int i=2;i<=n/2;i++)
    {
    if(n%i==0)
    return 1;
    }
 return 0; 
}
void main()
 {
   int n;
   printf("ente a number::");
   scanf("%d",&n);
   int i,j,f,flag=0;
   for(i=1;i<=n/2;i++)
   {
    int r=prime(i);
    if(r==0)
     {
         f=n-i;
         int s=prime(f);
        if(s==0)
         {
           printf(" \n %d+%d\n",i,f);
           flag++;
         }  
     }
    
   }
    printf("no of ways:%d\n",flag);
   if(flag==0)
      printf("-1\n");
 }
