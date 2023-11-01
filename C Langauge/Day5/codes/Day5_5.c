#include<stdio.h> 

int main( )
{
    // assignment => short hand assignment 
    int num = 4; 
    //num1 = num1 + 1; 
    //num+=1; // num = num + 1 
    //num-=2; // num = num - 2  
    //num*=2; // num = num * 2 
    //num/=2; // num = num / 2  
    num%=2; // num = num % 2  
    printf("%d",num); 
    return 0; 
}
/*  
        num+=1 
        num = num + 1 

        num+=4; 
        num = num + 4 

        num-=1
        num = num - 1; 

        num*=2; 
        num = num * 2 

        num+=10; 
        num = num + 10     

*/