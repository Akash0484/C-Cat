#include<iostream> 
using namespace std;  
class Date
{
    int day; 
    int month; 
    int year; 
   public: 
     Date( void ):day(0) , month(0) , year(0){

     }   
     Date(int day , int month , int year):day(day),month(month),year(year){

     } 
     void accept_record( void  )
     {
         cout<<"Day :"; 
         cin>>this->day; 
         cout<<"Month   :   "; 
         cin>>this->month; 
         cout<<"Year    :   "; 
         cin>>this->year;   
     }
     void print_record( void  )
     {
         cout<<this->day<<" / "<<this->month<<" / "<<this->year<<endl;    
     }
}; 

class Employee
{
    private: 
    string name; 
    int empid; 
    float salary; 
    Date joinDate; // Association  
    public: 
    Employee( void ) : name(""),empid(0),salary(0){

    }
    Employee( string name , int empid , float salary , Date joinDate )
    :name(name),empid(empid),salary(salary),joinDate(joinDate){

    }
    //this = &emp; 
    void accept_record( )
    {
        cout<<"Name :   ";
        cin>>this->name; 
        cout<<"Empid    :   "; 
        cin>>this->empid; 
        cout<<"Salary   :   "; 
        cin>>this->salary;  
        this->joinDate.accept_record( ); 
    }  

    //this = &emp
    void print_record( void  )
    {
        cout<<"Name :   "<<this->name<<endl;
        cout<<"Empid :   "<<this->empid<<endl;
        cout<<"Salary :   "<<this->salary<<endl; 
        this->joinDate.print_record( ); 
    }

}; 

int main()
{
    Employee emp; 
    emp.accept_record( );//emp.accept_record( &emp );
    emp.print_record( );//emp.print_record( &emp ); 
    return 0;
}
