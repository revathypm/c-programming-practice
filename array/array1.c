// array address access
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
    printf(" \nthe elements are::");
   for(i=0;i<s;i++)
   {
      printf("\na[%d]::",i+1);
     printf("%d",a[i]);
    }
    printf("address of a[0] is:%d",&a[0]);
     printf("address of a[0] is:%d",a[0]);
      printf("address of a[0] is:%d",&*a[0]);// all three same
}
    
