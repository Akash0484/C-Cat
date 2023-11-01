#include<stdio.h> 
int main()
{

    // int a = 1; 
    // int b = 1; 
    // int ans; 
    // ans = a && b; 
    // //    T && T 
    // //      T 
    // printf("ans = %d a=%d b=%d",ans,a,b); 

    // int a = 1; 
    // int b = 1; 
    // int ans; 
    // ans = a || b; 
    // //    T || XXX 
    // //      T 
    // printf("ans = %d a=%d b=%d",ans,a,b); 

    // int a = 0; 
    // int b = 2; 
    // int ans; 
    // ans = a && b; 
    // //    F || XXX 
    // //      F 
    // printf("ans = %d a=%d b=%d",ans,a,b); 
    
    int a = 0; 
    int b = 2; 
    int ans; 
    ans = a || b; 
    //    F || T 
    //      T 
    printf("ans = %d a=%d b=%d",ans,a,b); 
    
    return 0;
}
