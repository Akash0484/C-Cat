#include<stdio.h> 
int add(int a, int b); 
int main( )
{
    //function pointer 
    //int (*ptr)(int); 
//ptr is a pointer to a function that accepts int and returns the int     
    
    int (*ptr1)(int,int) = add;

    int (*ptr2)(int,int) = &add; 

    //dereferecing => calling the function 

    (*ptr1)(10,20); //call 
    ptr2(1,2); // call 
    /*
        array of function pointers 
        int (*arr[4])(int,int); 
    */
    
    return 0; 
}

int add(int a, int b)
{
    printf("%d\n",a+b); 
}
/*

        type qualifiers 
        const , volatile 

        volatile int status = 1; 

        while(status == 1)
        {
            //CODE 
        }

        while(1)
        {
            //CODE 
        } 

        typdef struct node 
        {
            int data; 
            struct node *next; 
        }node_t;

*/