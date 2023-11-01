#include<stdio.h> 
//register int y = 300;// NOT OK 
int main( )
{
    register int i;
    // storage => cpu register ( fast accessible )
    printf("%d",i); // Garbage 
    {
        register int i = 500; 
        printf("%d",i); // 500 
    }
    int x ; // local variable --> stack => process => RAM 
    printf("%u ",&x); // OK 
    //printf("%u ",&i); // NOT OK 

    //int a = 10; 
    //register int *ptr = &a;  // OK 
      
    //register int b = 20;
    //int *ptr = &b;   

    return 0; 

}