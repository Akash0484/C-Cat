#include<stdio.h> 

int main( )
{
    int num = 10; 
    int *ptr = &num; // referencing 
    int **pptr = &ptr; //referencing ( pointer to pointer )  
//pptr is a pointer which will store the address of pointer to a integer      
    
    printf("num = %d ",num); 
    printf("**pptr = %d ",**pptr); //10 
    /*
                **pptr 
                valueat(valueat(pptr))
                valueat(valueat(200))
                valueat(100)
                10 

    */
    **pptr = 60;
    printf("num = %d ",num); // 60 
    printf("**pptr = %d ",**pptr); //60 
    return 0; 
}