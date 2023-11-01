#include <stdio.h>
#include <limits.h>

int main()
{
    // short => type modifier
    //short int num = 32767;
    //signed short int num;
    //printf("%d",sizeof(num)); // 2
    /*
            short int => 2 byte 
            2 byte => 16 bits ( MSB => yes )
            ( 2 to the power 16 - 1 ) - 1 
            ( 2 to the power 15 ) - 1
            32767 => max range  
            -32768 => min range 
    */

    //printf("%hd ",SHRT_MAX);
    //printf("%hd \n",SHRT_MIN);
    //printf("%hd",num);

    //unsigned short int num = 65535; // 2 bytes
    /*
            unsigend short int num 
            2 byte => 16 bits 
            ( 2 to the power 16 ) - 1
            65535 => max range 


    */
    //printf("%u ",num);

    //long int num;
    // signed long int num;
    //printf("%d",sizeof(num)); // 4 bytes

    //long x = 100;
    //printf("%ld",x);

    //long long int num;
    //signed  long long int num;
    //unsigned long long int num;
    //printf("%d",sizeof(num));// 8 bytes

    return 0;
}
/*
          10 => 1010 

          int num;  ==> 4  
          unsigned int num; ==> 4  
          short int num;  ==> 2 
          unsigned short int num; ==> 2  
          long int num; ==> 4 
          unsigned long int num; ==> 4  
          long long int num; ==> 8 
          unsigned long long int num; ==> 8 

*/