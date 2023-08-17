#include<stdio.h>
//structure
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Empy
{
    int id;
    int phone;
    float sal;
    char g;
    char name[1024];
    
};
typedef struct Empy emp; 

void dis(emp e)
{   printf("\ndetails")
    printf("\nid:%d\n",e.id);
    printf("ph:%d\n",e.phone);
    printf("sal:%f\n",e.sal);
    printf("gender:%c\n",e.g);
    printf("name:%s",e.name);
}
void scan(emp *e)
{
    printf("\nsize of Emp:%lu",sizeof(e));
    printf("\nenter id,ph,sal,g,name:\n");
    scanf("%d",&e->id);
    scanf("%d",&e->phone);
    scanf("%f",&e->sal);
    scanf("%s",&e->g);
    scanf("%s",e->name);

}
void main()
{   emp e;
    scan(&e);
    dis(e);
}  
  
