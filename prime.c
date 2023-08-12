//prime or not
#include<stdio.h>
int prime (int n)
{
if(n==1)
return 0;
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
    printf("enter number::");
    scanf("%d",&n);
    int r=prime(n);
    if(r==1)
     printf("\nit is not prime\n");
    else
     printf("\nit is prime\n");
  }
  
  
