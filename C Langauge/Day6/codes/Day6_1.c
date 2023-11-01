#include<stdio.h> 

int main()
{   
    // // Bitwise AND => & 
    // printf("%d ", 10 & 5 );
    // // Bitwise OR => | 
    // printf("%d ", 10 | 5 );
    // // Bitwise OR => ^
    // printf("%d ", 10 ^ 5 );

    printf("%d ",~10); // -( n + 1 ) => - (10 + 1) => -11
    /*
            ~10 
             Bitwise 
           0000  1010 ( binary of 10 )
             ~   ( invert the bits )

           1111  0101 => o/p

            2s compliment 

            0000   1010  => 1s Compliment 
                      1 
          -----------------
            0000   1011 ( 11  )  => -11            




    */  
    return 0; 
}
