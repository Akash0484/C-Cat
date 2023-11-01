#include<stdio.h> 
#include<stdlib.h>

int main( )
{
    //malloc , calloc , realloc ( dynamic mem allocation )  
    // void* malloc(size_t size); 
    float *ptr;   
    ptr = (float*)malloc(sizeof(float));// Request  

    if(ptr == NULL) // check if avail 
    {
        printf("Memory not allocated"); 
        exit(1); 
    }
    *ptr = 11.33; // Use  
    //valueat(ptr)=>valueat(1000)=>11.33 

    printf("%.2f",*ptr); //11.33 

    free(ptr);// To avoid memory leakage     

    ptr = NULL; // To avoid dangling pointer  
    return 0; 
}