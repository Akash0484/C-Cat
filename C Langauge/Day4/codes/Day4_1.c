#include <stdio.h>

int main()
{
    // escape sequence
    // \n => new line
    //printf("Hello \n World");

    //\" => double quote
    // printf("\"Hello world\"");

    //printf("\'Hello world\'");

    // \b => backspace
    //printf("OM42 batch,\b");
    //      OM42 batch,

    //printf("OM42 batch,\b.");
    //      OM42 batch.

    //printf("Hello wo\brld");
    //      Hello wrld

    // \t => tab spaces ( 8 spaces )

    //printf("12345678\n");
    //printf("\tSunbeam");

    //printf("12345678\t12345678\t12345678");
    //      12345678

    //printf("\tSunbeam\tInfo\tcom");
    //- - - - - - - -S u n b e a m - I n f o - - - - c o m

    //printf("\tSunbeaminfo\tcom");
    //  - - - - - - - - Sunbeaminfo - - - - - com

    //\r => carraige return

    //printf("KM 42batch\rO");
    //      OM 42batch

    //printf("\\n is used for new line");

    // printf("discount is 10%%");

    //float fvar =12.33; 
    //printf("%*.*f",10,2,fvar); 
    //      %10.2f 
    //               1 2 . 3 3 
    //     - - - - - - - - - - 
    
    int val = 12;
    float fvar =12.33; 
    printf("%0*.*f",val-2,val-10,fvar); 
    //              10  ,  2 
    //     %010.2f  

    
    
    return 0;
}

// printf("OM 42batch\b\b\b\b\b\b\b\b\bM");