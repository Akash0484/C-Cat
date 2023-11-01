#include<stdio.h> 

int main( )
{
    int x = 1;  
    int num; 
    char ch; 
    double d1; 
    short int s1; 
    // sizeof( ) is evaluated at compile time  
    // printf("%d ",sizeof(10 + 2));// 4 
    // printf("%d ",sizeof(num + ch + d1));//8
    // printf("%d ",sizeof(10.33 + 'A')); // 8 
    // printf("%d ",sizeof(10.33f + 'A')); // 4 
    // printf("%d ",sizeof(s1 + ch)); // 4  
  
      printf("%d ",sizeof(x + 1)); // 4  
      printf("\nx = %d ",x); // 1
    return 0; 
}