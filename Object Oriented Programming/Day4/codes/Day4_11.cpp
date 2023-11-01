#include<iostream> 

using namespace std; 

class Person // Parent class / base class 
{
    private: 
    string name; // 24 
    int age;  // 4 
    public: 
    
    Person( void ):name(" "), age(0){
         cout<<"Person( void ):name(" "), age(0)"<<endl;   
    }
    Person(string name , int age ):name(name),age(age){
         cout<<"Person(string name , int age ):name(name),age(age)"<<endl;    
    }   
    
    void printRecord( void )
    {
        cout<<"Name :   "<<this->name<<endl; 
        cout<<"Age :   "<<this->age <<endl; 
    }
}; 

class Employee : public Person  // derived class / child class 
{
    private: 
    //string name; //24  
    //int age; // 4 
    int empid; // 4 
    float salary; // 4 
    public: 
    Employee(void):empid(0),salary(0){
         cout<<"Employee(void):empid(0),salary(0)"<<endl;    
    }

    Employee(string name , int age , int empid , float salary):Person(name,age),
    empid(empid),salary(salary){
         cout<<"Employee(int empid , float salary):empid(empid),salary(salary)"<<endl;    
    }
    void printRecord( void )
    {
        Person::printRecord( ); 
        cout<<"Empid  :   "<<this->empid<<endl;
        cout<<"Salary  :   "<<this->salary<<endl; 
    }
    
};

int main( )
{
    Employee e("Ketan",30,1,1000.12); 
    e.printRecord( ); 
    return 0; 
}

