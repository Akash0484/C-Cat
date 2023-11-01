#include <stdio.h>

int main()
{
    // printf("%d ",sizeof(10)); // 4
    // printf("%d ",sizeof(10.33)); // 8
    // printf("%d ",sizeof(10.33f)); // 4
    // 10.33 => double 10.33f => float

    //char ch = 'A';
    //printf("%d  ",sizeof(ch)); // 1
    //printf("%d  ",sizeof('A')); // 4
    // sizeof(65)
    // char const => int

    // printf("%d", sizeof(10l));  // long => 4
    // printf("%d", sizeof(10L));  // long => 4
    // printf("%d", sizeof(10LL)); // long long => 8
    // printf("%d", sizeof(10u));  // unsigned => 4
    // printf("%d", sizeof(10U));  // unsigned => 4

    //printf("%d ",100); // int constant 
    //printf("%d ",0100); // octal => decimal 
    //printf("%o ",0100); // octal => octal  
      
      printf("%d ",0x23); // Hexadecimal => decimal 
      printf("%x ",0x23); // Hexadecimal => Hexadecimal 
    return 0;
}