#include<stdio.h> 

int main( )
{
    int num1 = 10; 
    char ch = 'A'; 
    double dvar = 12.33; 
    float fvar  = 10.33;   
    //sizeof( ) => operator => bytes 
    // sizeof() => integer => 1,4,8,16 
    // sizeof() => %d 
    printf("%d\n",sizeof(num1)); // 4 byte 
    printf("%d\n",sizeof(dvar)); // 8 byte   
    printf("%d\n",sizeof(ch));  // 1 byte 
    printf("%d\n",sizeof(fvar)); // 4 byte 

    return 0; 
}