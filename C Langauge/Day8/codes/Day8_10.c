#include<stdio.h> 

int main( )
{
    int a = 10;  // stack => main's FAR 
    //static int b = a; // NOT OK ( error ) 
    return 0; 
}


// int main( )
// {
//     int a = 10;  // stack => main's FAR 
//     // a will be destroyed when main's FAR is destroyed 
//     static int num = 10; // Data section 
//     // After main's FAR is destroyed 
//     // After completion of main 
//     return 0; 
// }