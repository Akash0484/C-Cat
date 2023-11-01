#include <stdio.h>
int addition(int num1, int num2); // function declaration
//OS => main( )
int main() // user-defined function
{
    int num1, num2;
    int x, y, res;
    x = 1;
    y = 2;
    res = addition(x, y); // function call
    printf("res = %d", res); // 3 
    res = addition(10, 2); // function call
    printf("res = %d", res); // 12 
    return 0;
}

int addition(int num1, int num2) // function defination
{

    int z;           // z is also a local variable
    z = num1 + num2; // 10 + 2 => 12
    return z;
}
