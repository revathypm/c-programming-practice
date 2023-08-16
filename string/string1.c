//scan charaters untile 'Z' is entered
#include<stdio.h>
#include<string.h>
void main()
 {
     int i=0,l=0;
     char buff[20];
     printf("enter:\n");
     while((buff[i++]=getchar())!='Z');
     
     buff[i]='\0';
     l=strlen(buff);
     i=0;
     //puts(buff);
     
     printf("\n");
     while(i<=l)
     {
         putchar(buff[i]);
         i++;
     } 
     

 }