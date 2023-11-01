#include<stdio.h> 

int main( )
{
    // int a = 1; 
    // int b = 1; 
    // int c = 1; 
    // int ans; 

    // ans = a || b && c; 
    // //    a || (b && c); 
    // //    T ||  XXXX
    // //       T    
    // //    L ||   R   

    // printf("ans = %d a = %d b = %d c = %d",ans,a,b,c);  

    // int a = 1; 
    // int b = 1; 
    // int c = 1; 
    // int ans; 

    // ans = a || b++ && c++; 
    // //    a || (b++ && c++); 
    // //    T ||  XXXX
    // //       T    
    // //    L ||   R   

    // printf("ans = %d a = %d b = %d c = %d",ans,a,b,c);  

    // int a = 0; 
    // int b = 1; 
    // int c = 3; 
    // int ans; 

    // ans = a || b++ && c++; 
    // //    a || (b++ && c++); 
    // //    F || ( T++ && T++)
    // //    F ||   T 
    // //      T 

    // printf("ans = %d a = %d b = %d c = %d",ans,a,b,c);  

    int a = 0; 
    int b = 1; 
    int c = 3; 
    int ans; 

    ans = ++a || b++ && c++; 
    //    ++a || (b++ && c++);
    //     T  ||   XXXXX
    //         T    
   
    printf("ans = %d a = %d b = %d c = %d",ans,a,b,c);  

    return 0; 
}