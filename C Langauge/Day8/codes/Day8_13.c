#include<stdio.h> 
int myfact(int num); 
int main( )
{
    int result; 
    result = myfact(5);
    printf("res = %d",result);  
    return 0; 
}
int myfact(int num)
{
    int result = 1; 
    int i; 
    for( i = 1 ; i<=num ; i++)
            result = result * i; 
    return result;         
}