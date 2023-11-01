#include <stdio.h>

int main()
{
    /*
        A - Z => 65 to 90
        a -z  => 97 to 122  
    */
    //char ch = 'A';
    //printf("%c ",ch); // A
    //printf("%d ",ch); // 65
    //'A' ==> %d ==> 65 (ascii value )

    //  char ch = 65;
    //  printf("%c ",ch); // A
    //  printf("%d ",ch); // 65
    //  printf("%d ",'a');

    //char ch = 127; // signed
    /*
                signed ( msb )
                char => 1 byte => 8 bits 
            ( 2 to the power 8 - 1 ) - 1
            ( 2 to the power 7 ) - 1
                127 => max range 
                -128 => min range          
       */
    //printf("%d",ch);

    unsigned char ch = 255;
    /*
                char => 1 byte 
                1 byte => 8 bits 
                ( 2 to the power 8 ) - 1 
                   256 - 1 
                   255 => max range 

        */
    printf("%u ", ch);

    return 0;
}