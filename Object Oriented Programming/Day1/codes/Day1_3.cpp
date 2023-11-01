#include<stdio.h> 
 
class Employee
{
    //data member / field / property / attribute 
    private: 
    char name[20]; 
    int empid; 
    double salary; 
    
    public: 
    //member function / method / opearation / behaviour 
    void accept_record( void  )// concrete method 
    {
        printf("Name    :   ");
        scanf("%s",name); 
        printf("Empid   :   "); 
        scanf("%d",&empid); 
        printf("Salary  :   "); 
        scanf("%lf",&salary);        
    }
    void print_record(    )//concrete method
    {
        printf("Name    :   %s\n",name); 
        printf("Empid   :   %d\n",empid);
        printf("Salary   :   %.2lf\n",salary); 
    }

    

}; 

int main( )
{   
    
    //class Employee emp; 

    Employee emp; // instantiation 
    //emp.Employee::accept_record( ); // Message passing 
    //emp.Employee::print_record( ); // Message passing 

    Employee emp1;// instantiation 
    Employee emp2;// instantiation 
    emp.accept_record( ); // Message passing  
    //emp.salary = 0; // NOT OK  
    //emp.print_record( ); // Message passing  
    
    
    return 0; 
}


/*

        class book
        {
             char name[20]; 
             int pages; 
             int price; 
             char authorname[20];    
        }; 

        Book letusC;
        Book Cprog;  
*/

