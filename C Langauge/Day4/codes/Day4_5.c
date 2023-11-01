#include<stdio.h> 

int main( )
{
    char ch = 130; // signed ==> 127 to -128 
    printf("%d",ch); // -126
    return 0; 
}
// -128 -127 -126 -125 -124 ...... 0  1  2 3 ..... 127 