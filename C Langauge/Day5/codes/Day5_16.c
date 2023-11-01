#include<stdio.h> 
int main()
{
    // int a = 0; 
    // int b = 1; 
    // int c = 0; 
    // int ans; 

    // ans = a++ && b++   || c++;    
    // //         L       ||  R
    // //    (a++ && b++) || c++;
    // //    (F++ && XXX) ||
    // //        F        ||  F
    // //                 F          
          

    // printf("ans = %d a = %d b = %d c = %d",ans,a,b,c);  
    
    // int a = 1; 
    // int b = 1; 
    // int c = 0; 
    // int ans; 

    // ans = a++ && b++   || c++;    
    // //         L       ||  R
    // //    (a++ && b++) || c++;
    // //    (T++ && T++) || XX
    // //              T 
    // printf("ans = %d a = %d b = %d c = %d",ans,a,b,c);  

    // int a = 1; 
    // int b = 1; 
    // int c = 0;
    // int ans; 
    // ans = a++ || b++ || c++; 
    // //    T++ || XXXX
    // printf("ans = %d a = %d b = %d c = %d",ans,a,b,c);  

    int a = 1; 
    int b = 1; 
    int c = 0;
    int ans; 
    ans = a++ && b++ && c++; 
    //    (a++ && b++) && c++;
    //    (T++ && T++)
    //         T       && F++
    //              F  
    printf("ans = %d a = %d b = %d c = %d",ans,a,b,c);  

    return 0;
}
/*
        int a = 0; 
        int b = 2; 
        int c = 3; 
        int ans; 

    ans = a++ || b++ && ++c && a++ || b++;      
    printf("ans = %d a = %d b = %d c = %d",ans,a,b,c);  


*/
