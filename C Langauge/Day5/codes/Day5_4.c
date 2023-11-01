#include<stdio.h> 

int main( )
{
    //arithmatic => +,- , / , % 

    //assignment operator ( = )
    int num1 = 1; // var decl + init 
    //num1 = 10; // assignment opr 
    //2 = 10;  // lvalue error  
    //2 + 1 = 3; // lvalue error    
    //num1 = 2 + 3; // OK  
    //printf("%d",num1); // 10 

    int a = 3; 
    int b = 4; 
    printf("%d ",a); // 3 
    printf("%d ",a=b); // 4 
    printf("%d ",a); // 4  


    return 0; 
}