#include<stdio.h>

int main( )
{
    int num = 10;
    int *ptr = &num;//init 
    printf("num = %d",num); //10

    //dereferencing opr => * => valueat operator    
    
    printf("%d ",*ptr);//10 
    /*
            *ptr 
            valueat(ptr)
            valueat(100)
            10 

    */ 

    return 0; 
}
