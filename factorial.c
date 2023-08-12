//factorial of a number
#include<stdio.h>
int fact(int num)
 {
  int r=0;
  if(num==0)
      return 1;
   else
     r=num*fact(num-1);
  return r;
 }
void main()
{
 int num=0;
    printf("enter::");
   scanf("%d",&num);
   printf("factorial::%d",fact(num));
}
