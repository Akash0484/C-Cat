#include<stdio.h>

int main( )
{
    int num = 10;
    int *ptr = &num;//init 
    printf("num = %d\n",num); //10

    *ptr = 20; 
    /*
            *ptr
            valueat(ptr)
            valueat(100)
                    ==> 20 

    */
    printf("num = %d\n",num); //20
    printf("num = %d\n",*ptr); //20

    *ptr = 50; 
    
    printf("num = %d\n",num); //50
    printf("num = %d\n",*ptr); //50

    return 0; 
}
