//palindrome

#include<stdio.h>
#include<stdlib.h>
void main()
 {
   int n,rev,temp,t;
   printf("enter the number::");
   scanf("%d",&n);
   temp=n;
   rev=0;
   while(n>0)
     {
     t=n%10;
     rev=rev*10+t;
     n=n/10;  
     }

   if(temp==rev)
    printf("\n it is palindrome\n");
   else
    printf("\n it is not palindrome\n");
  }
