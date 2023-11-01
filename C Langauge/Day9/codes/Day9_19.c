#include<stdio.h> 

int main( )
{
    const int num = 10; 
    const int num2 = 20; 
    const int * const ptr = &num;
    //const int const  * const ptr = &num;  
//ptr is a constant pointer pointing to a constant integer variable     
    
    printf("%d ",num);
    printf("%d ",*ptr);
    //*ptr = 20; // NOT OK
    //ptr = &num2; // NOT OK  
    return 0; 
}