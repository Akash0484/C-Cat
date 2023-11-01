#include<stdio.h> 

int main( )
{
    int a = 1; 
    int ans; 

    //ans = ++a,++a,++a; 
    
    ans = a++,a++,a++; 
    printf("ans = %d a=%d",ans,a);  
    //                      1  4  
    return 0; 
}