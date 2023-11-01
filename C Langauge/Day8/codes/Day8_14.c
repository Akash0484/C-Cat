#include<stdio.h> 
int myfact(int num); 
int main( )
{
    int result; 
    result = myfact(4);
    printf("res = %d",result);  
    return 0; 
}
int myfact(int num)
{
    int result;

    if( num == 0 )
        return 1; 
    else 
        result = num * myfact( num - 1);   
    return result;     
   
}