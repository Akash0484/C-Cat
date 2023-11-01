#include<iostream>

using namespace std; 

class A
{
    public: 
    void sum( void ); 
}; 

class B 
{
    private: 
     int num1; 
     int num2; 
    public: 
      B( void ); // declaration 
      friend void A :: sum( );   
}; 

B::B( void )
{
    this->num1 = 10; 
    this->num2 = 20; 
} 

void A :: sum( )
{
    B obj; 
    int res; 
    res = obj.num1 + obj.num2; 
    cout<<"res  :   "<<res;  
}

int main( )
{
    A obj; 
    obj.sum( ); 
    return 0; 
}

