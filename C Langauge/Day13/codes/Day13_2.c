#include<stdio.h> 
struct date 
{ 
    int day; 
    int month; 
    int year;
}; 
struct emp
{
    int empno; 
    char name[20]; 
    double  sal;
    struct date join;   
       
};

int main( )
{
    struct emp e1 = {1,"Ketan",1000.00,{1,1,2000}}; 
//printf("%d %s %.2lf %d-%d-%d",e1.empno,e1.name,e1.sal,
//                        e1.join.day,e1.join.month,e1.join.year);     
    
    struct emp e2; 
    struct emp *p; 
printf("Enter empno name and salary , joining date(day,month,year)");
scanf("%d%s%lf%d%d%d",&e2.empno,e2.name,&e2.sal,
                    &e2.join.day,&e2.join.month,&e2.join.year); 

    p = &e2; 
printf("%d %s %lf, %d-%d-%d",p->empno,p->name,p->sal,
                    p->join.day,p->join.month,p->join.year);     
    return 0; 
}