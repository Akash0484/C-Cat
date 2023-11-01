#include<iostream> 
#include<string> 

using namespace std;  

namespace ntest 
{
    class Employee 
    {
        //data member 
        private: 
        string name; 
        int empid; 
        float salary; 

        public: 
        void accept_record();// declaration 
        void print_record( ); // declaration  

        
    }; //end of class 
} // end of namespace 
using namespace ntest;  
void Employee :: accept_record()
{
    cout<<"Name :   "; 
    cin>>name; 
    cout<<"Empid    :   "; 
    cin>>empid; 
    cout<<"Salary   :   "; 
    cin>>salary;    
}
void Employee :: print_record( )
{
    cout<<"Name :   "<<name<<endl; 
    cout<<"Empid    :   "<<empid<<endl; 
    cout<<"Salary   :   "<<salary<<endl;  
}

int main( )
{
    //ntest::Employee emp;  // instantiation 
    
    using namespace ntest; 
    Employee emp;  // instantiation 
    emp.accept_record(); //message passing   
    emp.print_record(); //message passing   
    
    return 0; 
}

/*
    class Test 
    {
       
    };

    Test t1;   

    class Car
    {
        string name; 
        int price; 
        string color;
    } 

    car maruti800; 
    car BMW; 
    car tatanano 

    class Book 
    {
        int price; 
        int pages; 
        string authorname; 
    }
    Book c; 
    Book c++; 

*/
