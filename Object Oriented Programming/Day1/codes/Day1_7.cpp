#include<stdio.h> 

namespace na 
{
    int num1 = 10; 
    int num3 = 20; 
}
namespace nb 
{
    int num1 = 30; 
    int num3 = 40; 
}
int main( )
{
    printf("num1    :   %d\n",na::num1); //10 
    printf("num3    :   %d\n",na::num3); //20 
    printf("num1    :   %d\n",nb::num1); //30
    printf("num3    :   %d\n",nb::num3); //40   
    return 0; 
}