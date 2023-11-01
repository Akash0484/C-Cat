#include<stdio.h> 
int* fun( ); 
int main( )
{
    int *p; 
    p = fun( );
    printf("%d ",*p);  
    return 0; 
}
int* fun( )
{
    int num = 10; 
    return &num; 
}