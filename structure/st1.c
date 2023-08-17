#include<stdio.h>
//structure
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//basic structure format
struct Empy
{
    int id;
    long int phone;
    float sal;
    char g;
    char name[1024];
    
};
typedef struct Empy emp; 

void dis(emp e)
{   printf("\ndetails")                                   //pass by value
    printf("\nid:%d\n",e.id);
    printf("ph:%ld\n",e.phone);
    printf("sal:%f\n",e.sal);
    printf("gender:%c\n",e.g);
    printf("name:%s",e.name);
}
void scan(emp *e)                                        //pointer e,pointing to emp
{                                                        //pass by reference
    printf("\nsize of Emp:%lu",sizeof(e));
    printf("\nenter id,ph,sal,g,name:\n");
    scanf("%d",&e->id);
    scanf("%ld",&e->phone);                             //  '->' used to assign valuse using pointer
    scanf("%f",&e->sal);
    scanf("%s",&e->g);
    scanf("%s",e->name);

}
void main()
{   emp e;
    scan(&e);                                         //pass by value
    dis(e);
}  
  
