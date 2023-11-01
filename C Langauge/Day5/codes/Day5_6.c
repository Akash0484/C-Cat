#include<stdio.h> 

int main( )
{
    int a = 1; 
    int b = 2; 
    int c = 3; 
    //a+=b+=c+=1;
    /*
             c = c + 1 // 3 + 1 => 4    
             b = b + c // 2 + 4 => 6 
             a = a + b // 1 + 6 => 7    
    */  
    
    //a = b = c = -2;  
    //printf("%d %d %d",a,b,c); 

    int num1 = 1; 
    //num1 + 1; // 1 
    num1 = num1 + 1; // 2 
    printf("%d",num1); 

    return 0; 
}