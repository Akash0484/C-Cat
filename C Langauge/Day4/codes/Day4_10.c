#include<stdio.h> 

int main( )
{
    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 2; 
    // int ans; 

    // ans = ( num1 + num2 + num3 )/3; 
    // /*
    //       (int + int + int ) / ( int )
    //       ( int ) / (int)
    //         int 
    //    RHS => int ( 2 )
    //    LHS => int  

    // */ 
    // printf("ans = %d",ans); 

    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1; 
    // float ans; 

    // ans = ( num1 + num2 + num3 )/3; 
    // //    ( 2 + 2 + 1 ) / 3 => 1.6 
    
    // /*
    //       (int + int + int )/ ( int )
    //             ( int ) / ( int )
    //                  ( int )
    //        RHS => int => 1.6 => int => 1 
    //        LHS => float 
    //        1 ==> 1.0                 

    // */
    
    // printf("ans = %.1f",ans); 
    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1; 
    // float ans; 

    // ans = ( num1 + num2 + num3 )/3.0; 
    // //    ( 2 + 2 + 1 ) / 3 => 1.6 
    
    // /*
    //       (int + int + int )/ ( double )
    //             ( int ) / ( double )
    //                   double 
    //        RHS => double => 1.6 
    //        float <== double 
    //        1.6 => float => yes                  

    // */
    
    // printf("ans = %.1f",ans); 
    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1; 
    // float ans; 

    // ans = ( num1 + num2 + num3 )/3.0f; 
    // //    ( 2 + 2 + 1 ) / 3 => 1.6 
    
    // /*
    //       (int + int + int )/ ( float )
    //             ( int ) / ( float )
    //                   float 
    //        RHS => float => 1.6 
    //        float <== float 
    //        1.6 => float => yes                  

    // */
    
    // printf("ans = %.2f",ans); 
    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1; 
    // float ans; 

    // // Explicit typecasting 
    // ans = ( (float)num1 + num2 + num3 )/3; 
    // //    ( 2 + 2 + 1 ) / 3 => 1.6 
    
    // /*
    //       (float + int + int )/ ( int )
    //             ( float ) / ( int )
    //                   float  
    //        RHS => float => 1.6 
    //        float <== float 
    //        1.6 => float => yes                  

    // */
    
    // printf("ans = %.2f",ans); 

    //int num = 10.00;  
    //printf("%d",num); // 10 
    
    float f = 10; 
    printf("%.1f",f); // 10.0  
    return 0; 
}