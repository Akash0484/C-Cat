#include<stdio.h> 
namespace na 
{
    int num1 = 10; 
}

int main( )
{
    int num1 = 20; 
    using namespace na; 
    printf("num1    :   %d\n",num1);// 20 
    printf("num2    :   %d\n",na::num1);// 10  
    return 0; 
}

int main2( )
{
    int num2 = 20; 
    using namespace na; 
    printf("num1    :   %d\n",num1);// 10 
    printf("num2    :   %d\n",num2);// 20  
    return 0; 
}

int main1( )
{
    using namespace na; 
    printf("num1    :   %d\n",num1); 
    printf("num1    :   %d\n",num1); 
   // printf("num1    :   %d\n",na::num1); 
   // printf("num1    :   %d\n",na::num1); 
   // printf("num1    :   %d\n",na::num1); 
   // printf("num1    :   %d\n",na::num1); 
    return 0; 
}