// program to find equilibrium point ,so that  sum of elements left of it equal to sum of element at  right 
#include<stdio.h>

void main()
{ 	 int a[20],s,i,j,k,s1=0,s2=0,f=0;
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
         s1=0,s2=0;
         for(j=0;j<=i-1;j++)
           {
             s1=s1+a[j];
           }
         for(k=i+1;k<s;k++)
             {
             s2=s2+a[k];
             }
          if(s1==s2)
               {
                 f++;
                break;
               }
      }
      if(f>0)
      printf("equilibrium po::%d",i+1);
      else
      // program to find equilibrium point ,so that  sum of elements left of it equal to sum of element at  right 
#include<stdio.h>

void main()
{ 	 int a[20],s,i,j,k,s1=0,s2=0,f=0;
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
         s1=0,s2=0;
         for(j=0;j<i-1;j++)
           {
             s1=s1+a[j];
           }
         for(k=i+1;k<s;k++)
             {
             s2=s2+a[k];
             }
          if(s1==s2)
               {
                 f++;
                break;
               }
      }
      if(f==0)
      printf("equilibrium po::%d",i+1);
      else
       printf("no equilibrium position");
      
}