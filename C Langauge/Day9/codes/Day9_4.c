#include<stdio.h> 

void fun( int **ptr )
{
    printf("%d",**ptr); // 10 
    **ptr = **ptr + 20; 
    //      10  + 20 
    //        30   
}

int main( )
{
    int num = 10; 
    int *ptr = &num;  
    fun( &ptr); 
    printf("\n num = %d",num); //30  
}
// void fun( int *ptr )
// {
//     printf("%d",*ptr); // 10 
//     *ptr = *ptr + 20; 
//     //      10  + 20 
//     //        30   
// }

// int main( )
// {
//     int num = 10; 
//     fun( &num); 
//     printf("\n num = %d",num); //30  
// }