//inputing array element and printing
#include<stdio.h>
void main()
 {
   int s,a[20],i;
   printf("enter the size(<20)::);
   scanf("%d",&s);
   printf("enter the elements::");
   for(i=0;i<s;i++)
   {
      printf("\na[%d]::",i+1);
     scanf("%d",&a[i]);
    }
    printf();
    
  }

