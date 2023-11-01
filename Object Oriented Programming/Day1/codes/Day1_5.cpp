#include<stdio.h> 

int num1 = 10; 
int main( )
{
    int num1 = 20; 
    printf("num1    :   %d\n",::num1); //10 
    printf("num1    :   %d\n",num1); //20 
    {
        int num1 = 30; 
        printf("num1    :   %d\n",num1); //30
        printf("num1    :   %d\n",::num1); //10 

    }  
    return 0; 
}