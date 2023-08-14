// program to reverse array elements
#include<stdio.h>
void main()
{
    int s,arr[20],i,j,l,temp;
    printf("enter the size(<20)::");
	scanf("%d",&s);
	
	printf("enter the elements::");
	 for(i=0;i<s;i++)
   	  {
       		 printf("\na[%d]::",i+1);
       		 scanf("%d",&arr[i]);
        }
        l=s/2;
        for(i=0,j=s-1;i<l;i++,j--)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
        printf("the reversed elements::");
        for(i=0;i<s;i++)
   	  {
       		 printf("\na[%d]::",i+1);
       		 printf("%d",arr[i]);
        }
}