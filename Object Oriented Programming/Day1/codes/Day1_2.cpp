#include<stdio.h> 

struct Employee
{
    private: 
    char name[20]; 
    int empid; 
    double salary; 

    public: 
    void accept_record( )
    {
        printf("Name    :   ");
        scanf("%s",name); 
        printf("Empid   :   "); 
        scanf("%d",&empid); 
        printf("Salary  :   "); 
        scanf("%lf",&salary);        
    }
    void print_record( )
    {
        printf("Name    :   %s\n",name); 
        printf("Empid   :   %d\n",empid);
        printf("Salary   :   %.2lf\n",salary); 
    }

}; 




int main( )
{   
    
    struct Employee emp; 
    //accept_record( &emp );// Ketan 1 1000.00 
    //emp.salary = 0; 
    //print_record( &emp ); 
    
    emp.accept_record( ); 
    //emp.salary = 0; 
    emp.print_record( ); 

    return 0; 
}

//C with classes  ==> C++ 

//public , private , protected 