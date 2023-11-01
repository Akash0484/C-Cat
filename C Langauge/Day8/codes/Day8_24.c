#include<stdio.h> 

int main( )
{
    // pointer size is same ( it is address )
    /*
            32 bit compiler => 4 byte 
            64 bit compiler => 8 byte 
    */
    int *ptr; 
    char *cptr; 
    float *fptr; 
    double *dptr; 

    printf("%d ",sizeof(ptr)); // 4
    printf("%d ",sizeof(cptr));// 4
    printf("%d ",sizeof(fptr));// 4
    printf("%d ",sizeof(dptr));// 4 

    return 0; 
}