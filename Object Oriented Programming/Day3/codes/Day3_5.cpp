#include<iostream> 

using namespace std; 

class Test 
{
    private: 
      int num1; 
    protected: 
      int num2; 
    public: 
     Test( void )
     {
        this->num1 = 10; 
        this->num2 = 20;     
     }
     friend int main( );       
}; 

int main( )
{
    Test t1; 
    cout<<"Num1 :   "<<t1.num1; 
    cout<<"Num2 :   "<<t1.num2;
    
    return 0; 
}