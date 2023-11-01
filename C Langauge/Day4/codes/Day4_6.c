#include <stdio.h>

int main()
{
    //char ch = 500; // 127 to -128
    /*
            char => 1 byte ( size )
            1 byte => 8 bits 
            2 to the power 8 => 256 

            1.500 - 256 => 244
            2.244 - 256 => -12   

    */
    char ch = 900; // 127 to -128
    /*
            char => 1 byte ( size )
            1 byte => 8 bits 
            2 to the power 8 => 256 

            900 - 256 => 644 ( no  )
            644 - 256 => 388 ( no )
            388 - 256 => 132 ( no )
            132 - 256 => -124 ( yes )

    */
    printf("%d", ch); // -12
    return 0;
}
/*
        unsigned char ch  = 500; // 0 to 255 

                char => 1 byte 
                1 byte => 8 bits 
                2 to the power 8 => 256 
                500 - 256 => 244 ( yes )

        short int num = 90000; 

                short => 2 byte
                2 byte => 16 bits 
                2 to the power 16 => 65536 

             90000 - 65536 => 24464 ( yese ) 

                32767 -   -32768     




*/