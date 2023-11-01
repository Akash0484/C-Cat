#include<stdio.h>

int main( )
{
    int num = 10;
    int num2 = 50;  
    int *ptr = &num;//init 
    printf("num = %d\n",*ptr); //10

    ptr = &num2;    
    printf("%d ",*ptr); //50 
    /*
            *ptr 
            valueat(ptr)
            valueat(200)
            50 

    */ 
    
    return 0; 
}
