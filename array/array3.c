/*given a unsorted arry of size N, find sub array of given sum
input:
7
1 4 0 0 3 10 
sum=7
output:
sum found between indexes 1 and 4
*/
#include<stdio.h>
#include<stdlib.h>
void main()
 {
   int size,a[20],i,p=4,s,sum=0;
  // printf("enter the size(<20)::);
   scanf("%d",&size);
   //printf("enter the elements::");
   for(i=0;i<size;i++)
     {
        //printf("\na[%d]::",i+1);
        scanf("%d",&a[i]);
     }
     printf("sum=" );
    scanf("%d",&s); 
    
    for(i=0,j=0;i<size;i++)
     { 
 
       sum=0;
       for(int j=i;j<size;j++)
       {
       sum=sum+a[j];
        printf("the sum::%d\n",sum);
              if(sum==s)
        {
          printf("\n Sum found between indexes %d and %d\n ::",i,j);
         exit(0);
        }
        if(sum>s)
        {
         break;
         }
         }
     }
      printf("subarray not found");
 }
