#include<stdio.h> 
void addition ( int num1 ,int num2 ); 
int main( )
{
    int num1 = 1; 
    int num2 = 2; 
    addition ( num1 ,num2); 
    return 0; 
}
//                  1          2 
void addition ( int num1 ,int num2 )
{
        int r; 
        r = num1 + num2; // 3 
        display( r ); 
}
// display ==> calling function => addition 
void display( int result  )
{
    printf("res = %d",result); // 3 
}