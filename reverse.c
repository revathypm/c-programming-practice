 //reverse of a number
 #include<stdio.h>
 #include<math.h>
 int rev(int n)
  {
     int t,ret=0;
  
     
      while(n>0)
      { 
        t=n%10;
        ret=ret*10+t;
        n=n/10;
      }
     return ret;
  }
  
  void main()
 {
 int n,a;
    printf("enter::");
   scanf("%d",&n);
   if(n>0)
     printf("reverse is:%d\n",rev(n));
   else
    {
      a=n*-1;
      printf("reverse is:%d\n",rev(a)*-1);
    }
     
   }
