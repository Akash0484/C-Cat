#include<stdio.h> 
int addition( int num1 , int num2); // function declaration 
//OS => main( ) 
int main( )// user-defined function 
{
    // x , y , num1,num2 are called as local variables 
    // local variable => in function variable 
    // variable declared inside the function are called local variable
    int num1,num2; 
    int x,y,res; 
    x = 1; 
    y = 2; 
    res = addition( x , y  );  // function call 
    // x and y are called as actual argument 
    printf("res = %d",res); 
    return 0; 
}
//actual arguments are copied into formal arguments 

// num1 and num2 are called as formal arguments 
int addition( int num1 , int num2) // function defination 
{
    //num1 and num2 are local variables 
    int z; // z is also a local variable 
    z = num1 + num2; // 1 + 2 => 3 
    return z;  

}
// main is a calling function 
// addition is a called function 