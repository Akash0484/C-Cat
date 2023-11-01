#include<iostream> 

using namespace std; 

class A
{
    private: 
      int num1;
    public: 
    A( void )
    {
        this->num1 = 10; 
    }
    friend void sum( void  ); 
}; 
class B
{
    private: 
      int num2;
    public: 
    B( void )
    {
        this->num2 = 20; 
    }
    friend void sum( void  ); 
}; 

void sum( void  )
{
        A a; 
        B b;  
        int res; 
        res = a.num1 + b.num2; 
        cout<<"Result   :   "<<res<<endl;  
}

int main( )
{
    ::sum( ); 
    return 0; 
}