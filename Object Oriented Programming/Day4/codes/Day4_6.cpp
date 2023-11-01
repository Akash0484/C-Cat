#include<iostream> 

using namespace std; 

class Person // Parent class / base class 
{
    private: 
    string name; // 24 
    int age;  // 4 
    public: 
    static int num; 
    Person( void ):name(" "), age(0){

    }
    Person(string name , int age ):name(name),age(age){

    }
    static void fun( void  )
    {
        cout<<"static void fun( )"; 
    }
    void showRecord( void )
    {
        cout<<"Name :   "<<this->name<<endl; 
        cout<<"Age :   "<<this->age <<endl; 
    }
}; 
int Person::num = 100; 
class Employee : public Person  // derived class / child class 
{
    private: 
    //string name; //24  
    //int age; // 4 
    int empid; // 4 
    float salary; // 4 
    public: 
    Employee(void):empid(0),salary(0){

    }

    Employee(int empid , float salary):
    empid(empid),salary(salary){

    }
    void displayRecord( void )
    {
        cout<<"Empid  :   "<<this->empid<<endl;
        cout<<"Salary  :   "<<this->salary<<endl; 
    }
};

int main( )
{
    //cout<<Person::num<<endl;
    //cout<<Employee::num<<endl;
    //Person::fun( ); 
    Employee::fun( ); 
    return 0; 
}
