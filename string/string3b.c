// check if 2 string are anagram or not,2nd method
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i,j,x;
int l1=0,l2=0,temp,a1[26],a2[20],x,f=0;
void s(int l,char s[],int t)
{
    for(i=0;i<l;i++)
     {
         x=s[i];
         x=x-97;
         if(t==0)
         a1[x]++;
         else
         a2[x]++;
     }
    
}
void main()
 {   for(i=0;i<26;i++)
      {
          a1[i]=0;
          a2[i]=0;
      }
     char s1[20],s2[20];
     printf("enter:\n");
     scanf("%s",s1);
     printf("enter:\n");
     scanf("%s",s2);
     l1=strlen(s1);
     l2=strlen(s2);
     if(l1!=l2)
     {
         printf("\n not anagram");
         exit(0);
     }
     s(l1,s1,0);
     s(l2,s2,1);
     for(i=0;i<26;i++)
     {
      if(a1[i]!=a2[i])
      f++;
     }
     
     if(f==0)
     {
         printf("\n it is anagram");
     }
     else
      printf("\n it is not anagram");
    

 } 