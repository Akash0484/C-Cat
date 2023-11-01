#include<iostream> 

using namespace std; 

//order of parameters 
void sum( int num1 , float num2)
{
    float result; 
    result = num1 + num2; 
    cout<<"Result   :   "<<result<<endl; 
}
void sum( float num1 , int num2)
{
    float result; 
    result = num1 + num2; 
    cout<<"Result   :   "<<result<<endl; 
}

int main( )
{
    ::sum( 10 ,20.2f); 
    ::sum(10.2f,12); 
    return 0; 
}   