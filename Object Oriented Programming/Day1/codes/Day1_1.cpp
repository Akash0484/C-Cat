#include<stdio.h> 

struct Employee
{
    char name[20]; 
    int empid; 
    double salary; 
}; 
void print(struct Employee *ptr)
{
    printf("Name    :   %s\n",ptr->name); 
    printf("Empid   :   %d\n",ptr->empid);
    printf("Salary   :   %.2lf\n",ptr->salary); 
}
int main( )
{   
    struct Employee emp = {"Ketan",1,1000.00}; 
    print(&emp); // pass by address 
    return 0; 
}

//C with classes  ==> C++ 