#include<stdio.h>

int main( )
{
    int num = 10;
    int *ptr = &num;//init 
    
    printf("%d ",*ptr); 
    /*
            *ptr
            valueat(ptr)
            valueat(100)
            10 
    */

    *ptr = *ptr + 20; 
    /*
           *ptr => 10 
            10 + 20 
                => 
                *ptr 
                valueat(ptr)
                valueat(100)
                10 ==> 30   
    */
    printf("%d ",*ptr);// 30 
    printf("%d ",num); // 30 


    
    
    return 0; 
}
