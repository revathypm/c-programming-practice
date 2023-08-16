// check if 2 string are anagram or not
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i,j;
void sort(int l,char s[])
{  int temp;
    for(i=0;i<l-1;i++)
    for(j=0;j<l-i-1;j++)
    {
        if(s[j]>s[j+1])
        {
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
        }
    }
}
void main()
 {
     int l1=0,l2=0,ret,temp;
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
     
     sort(l1,s1);
     sort(l2,s2);
     if(strcmp(s1,s2)==0)
     {
         printf("\n it is anagram");
     }
     else
      printf("\n it is not anagram");
    

 } 