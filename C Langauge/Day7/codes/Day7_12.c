#include<stdio.h> 
void sunbeam( void ); 
int main( )
{
    sunbeam(  );// NOT OK  
    return 0; 
}

void sunbeam( void  )
{
    printf("void sunbeam( )"); 
}
//void sunbeam(  ); 
//void sunbeam(  void  ); 



// int sqr( int n);  // Global declaration 
// int main( )
// {
//     int r; 
//     int sqr( int n);  // local declaration 
//     r = sqr( 2 ); 
//     printf("%d",r); 
//     return 0; 
// }
// int sqr( int n)
// {
//     return n * n; 
// }