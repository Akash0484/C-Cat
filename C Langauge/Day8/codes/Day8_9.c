#include<stdio.h> 
int num2; // Data section  => program scope 
static int num = 10;  // Data section => file scope 
int main( )
{
    int num3 = 10; // stack 
    return 0; 
}

void fun( )
{
    static int num4 = 100; 
    printf("num = %d",num); 
}
/*      
        static int x 
        int n 
        main.c          f1.c    f2.c   

*/