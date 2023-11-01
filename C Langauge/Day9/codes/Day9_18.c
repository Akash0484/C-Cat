#include<stdio.h> 

int main( )
{
    int num = 10; 
    int num2 = 20; 
    int * const ptr = &num;
    //int *  ptr const  = &num; // NOT OK   
//ptr is a  constant pointer pointing to non constant integer variable     
    
    printf("%d ",*ptr); //10 
    *ptr = 20; 
    printf("%d ",*ptr); //20
    printf("%d ",num); //20
    //ptr = &num2; 
    
    return 0; 
}