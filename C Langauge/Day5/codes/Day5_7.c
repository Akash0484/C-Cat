
#include<stdio.h> 

int main( )
{
    
    //int num1 = 1 , 2 , 3; // int num1 = 1 , int 2 , int 3   

    // comma operator ( , )
    int a; 
    a = 1;  
    //a = 11,2,3,4,5,6,7,8,9;  
    //a = ( 1 ,2 ,3,100 ); 
      a = ( (1,2) , 3 );  
      //  (  2 , 3 )
      //      3 
    printf("a = %d",a); // 3 
    return 0; 
}