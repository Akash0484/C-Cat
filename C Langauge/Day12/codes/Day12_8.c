#include<stdio.h>
#include<string.h> 
//Global declaration 
//Declaration 
struct emp
{
    int empno; // 4
    char name[20]; //20
    double salary; // 8 
}; 

int main( )
{   
    struct student 
    {
        int roll; 
        char name[20];     
    }; 
    /*
            int 
            int x = 1; 
    */
    struct emp e1 = {1,"Ketan",1000.00};
    struct emp e2 = {2,"Amit"};  
    struct emp e3; 
    struct emp e4;  
    //e1=>variable / object 
    //struct emp => datatype  

    //printf("%d %s %.2lf",e1.empno,e1.name,e1.salary); 
    
    /*          
            int a;        
            int *p = &a;
    */
     //struct emp *p; //scale factor 32 bytes  
     //p = &e1; // pointer to structure 
     //printf("%d %s %.2lf",p->empno,p->name,p->salary);   
    /*
            int a; 
            a = 10; //assignment 
    */
    //  e3.empno = 3; 
    //  strcpy(e3.name,"Rahul");
    //  e3.salary = 2000.00;      
    //  printf("%d %s %.2lf",e3.empno,e3.name,e3.salary);        

     printf("Enter empid name and sal"); 
     scanf("%d%s%lf",&e4.empno,e4.name,&e4.salary); 

     printf("%d %s %.2lf",e4.empno,e4.name,e4.salary);        
     return 0; 
}