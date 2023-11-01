#include<stdio.h> 

namespace na // top level namespace  
{
    int num2 = 20; 
    namespace nb // nested namespace 
    {
        int num3 = 30; 
    }
} 

int main( )
{   
    printf("num2    :   %d\n",na::num2); //20 
    printf("num3    :   %d\n",na::nb::num3); //30 
    return 0; 
}