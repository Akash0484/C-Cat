#include<stdio.h> 
#include<limits.h> 

int main( )
{
    // type modifier 
    // signed , unsigned , short , long 

    int num = 2147483647;
    // By default it is considered as signed 
    // signed int num = -65 
    //printf("%d",num);
    /*
                int => 4 bytes => 32 bits ( 1 bit sign )

            (2 to the power 32 - 1 ) - 1
            (2 to the power 31 ) - 1 
             2147483647 => max range 
             -2147483648 => minrange  range       

    */


    //printf("%d ",INT_MAX); //2147483647
    //printf("%d ",INT_MIN); //-2147483648

    //printf("%d",num); 

     unsigned int num1 = 4294967295;    
     /*
            int => 4 byte => 32 bit 
            ( 2 to the power 32 ) - 1  
     */
    //printf("%u ",UINT_MAX); //4294967295 
    // %u => unsigned 

    printf("%u ",num1); 



    return 0; 
}