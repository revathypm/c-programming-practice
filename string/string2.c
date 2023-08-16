// reverse a string
#include<stdio.h>
#include<string.h>
void main()
 {
     int i=0,j,l=0,temp;
     char s1[20];
     printf("enter:\n");
     scanf("%s",s1);
     l=strlen(s1);
     printf("%d",l);
     i=0;j=l-1;
     while(i<l/2)
     {   temp=s1[i];
         s1[i]=s1[j];
         s1[j]=temp;
         i++;
         j--;
     }
     printf("\n");
     printf("%s",s1);
    

 } 