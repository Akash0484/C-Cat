#include<stdio.h> 
#include<stdlib.h> 

int main()
{
    //void* calloc(size_t n , size_t size); 
    //Heap section 
    int *ptr; 
    ptr = (int*)calloc(3 , sizeof(int));//Request  
    if( ptr == NULL)// check if avail 
    {
        printf("mem not allocated"); 
        exit(1); 
    }
    int i; 
    for( i = 0 ; i<=2 ; i++) // use 
           *(ptr + i) = 10 * ( i + 1);  

    //void* realloc(ptr , size_t size);  

    ptr  = (int*)realloc(ptr , 5 * sizeof(int));   
    ptr[3]= 22; // *(ptr + 3 )
    ptr[4]= 33; 
    for( i = 0 ; i<=4 ; i++)
         printf("%d ",ptr[i]); // *(ptr + i)
    
    free(ptr); // To avoid memory leakage 
    ptr = NULL; // To avoid dangling pointer 
    return 0; 
}