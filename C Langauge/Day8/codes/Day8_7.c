#include<stdio.h> 
void fun( );
extern int a;  
int main()
{
    //extern int a; 
    printf("a = %d",a); 
    fun( ); 
    return 0;
}
void fun( )
{
    //extern int a; 
    printf("a = %d",a); 
}
int a = 100; 
