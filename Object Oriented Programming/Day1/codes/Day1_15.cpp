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
        void accept_record()
        {
            cout<<"Name :   "; 
            cin>>name; 
            cout<<"Empid    :   "; 
            cin>>empid; 
            cout<<"Salary   :   "; 
            cin>>salary;    
        }
        void print_record( )
        {
            cout<<"Name :   "<<name<<endl; 
            cout<<"Empid    :   "<<empid<<endl; 
            cout<<"Salary   :   "<<salary<<endl;  
        }
    }; //end of class 
} // end of namespace 

int main( )
{
    //ntest::Employee emp;  // instantiation 
    
    using namespace ntest; 
    Employee emp;  // instantiation 
    emp.accept_record(); //message passing   
    emp.print_record(); //message passing   
    
    return 0; 
}