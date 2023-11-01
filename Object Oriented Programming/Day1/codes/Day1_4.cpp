#include<stdio.h> 

int num5 = 60; // Program scope 
static int num6 = 50; // File scope 

namespace na 
{
    int num4 = 40; // namespace scope 
    class Test 
    {
        int num3; // class scope 
    }; 
}
int main( )
{
    int sum( int num1, int num2); // prototype scope 
    int num2 = 20; // Local variable : function scope 
    {
        int num1 = 10; // local variable : block scope 
    } 
    return 0; 
}