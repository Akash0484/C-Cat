#include<stdio.h> 

namespace na 
{
    int num1 = 10; 
    int num3 = 20; 
}
namespace na
{
    //int num1 = 20; // NOT OK  
    int num4 = 40; 
} 
/*
    namespace na 
    {
        int num1 = 10; 
        int num3 = 20; 
        int num4 = 40; 
    }

*/

int main( )
{
    printf("num1    :   %d\n",na::num1);//10 
    printf("num3    :   %d\n",na::num3);//20 
    printf("num4    :   %d\n",na::num4);//40 
    return 0; 
}