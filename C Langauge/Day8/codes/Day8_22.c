#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num; // referencing 
    int **pptr = &ptr; //referencing ( pointer to pointer )  
//pptr is a pointer which will store the address of pointer to a integer      
    
    printf("ptr = %u ",ptr); //100
    printf("&ptr = %u ",&ptr); //200
    printf("pptr = %u ",pptr); //200
    printf("&pptr = %u ",&pptr); //500
    
    return 0; 
}