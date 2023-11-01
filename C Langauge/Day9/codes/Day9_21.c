#include<stdio.h> 

int main( )
{
    //int *ptr; // Garbage ( wild pointer ) 
     
    //int *ptr = NULL; // NULL pointer 
    
    int num = 10; 
    float fvar = 12.3; 
    double dvar = 10.3; 
    char ch = 'A'; 
    
    void *ptr; // Generic pointer 

    ptr = &num; 
    printf("%d ",*(int*)ptr); 
    
    ptr = &fvar;  
    printf("%.2f ",*(float*)ptr);

    ptr = &ch;  
    printf("%c ",*(char*)ptr);

    ptr = &dvar;  
    printf("%.2lf ",*(double*)ptr);

    return 0; 
}