#include<iostream> 

using namespace std; 

void sum( int num1 = 0  , int num2 = 0  , int num3 = 0  , int num4 = 0 , int num5 = 0   )
{
        int result = num1 + num2 + num3 + num4 + num5; 
        cout<<"Result   :   "<<result;  
}

int main( )
{     
    // ::sum( ); 
    // ::sum(10);     
    // ::sum(10,10);   
    // ::sum(10,10,10); 
    // ::sum( 10,10,10,10);
     ::sum(10,10,10,10,10); 
    return 0; 
}