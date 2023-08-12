#include<stdio.h>
#include<stdlib.h>
void main()
 {
   int n,rev,temp,t,a[20],s,f=0,i;
   printf("enter the size(<20)::");
   scanf("%d",&s);
   printf("enter the elements::");
   for(i=0;i<s;i++)
     {
       printf("\na[%d]::",i+1);
        scanf("%d",&a[i]);
     }
   for(i=0;i<s;i++)
   {
   temp=a[i];
   n=a[i];
   rev=0;
   while(n>0)
     {
     t=n%10;
     rev=rev*10+t;
     n=n/10;  
     }
     if(temp==rev)
       {
         
         f++;
      }
   
  }
  if(f==s)
   printf("\n it is palinarray\n");
  else
   printf("\n it is not palinarray\n");
}
