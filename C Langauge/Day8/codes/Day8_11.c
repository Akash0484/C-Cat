#include<stdio.h>

int fun( )
{
     static int num = 10;    
    //static int num; 
    //num = 10; 
    //static => initialized only once -- when program is started ( like global variables )
    num++; 
    printf("num = %d\n",num); 
}
int main( )
{
    //printf("num = %d",num); // error ( num not in scope )   
    fun( ); 
    fun( ); 
    fun( ); 
    return 0; 
}

// int num = 10; 
// int fun( )
// {
    
//     num++; 
//     printf("num = %d\n",num); 
// }
// int main( )
// {
//     //printf("num = %d",num); // 10   
//     fun( ); 
//     fun( ); 
//     fun( ); 
//     return 0; 
// }
// int fun( )
// {
//     int num = 10; 
//     num++; 
//     printf("num = %d\n",num); 
// }
// int main( )
// {
//     //printf("num = %d",num); // Error 
//     fun( ); 
//     fun( ); 
//     fun( ); 
//     return 0; 
// }