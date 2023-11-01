#include<stdio.h> 

int main( )
{
    int a; 
    float b; 
    //a = 23 / 5; // int / int => int ( 4.6 => int => 4 ) 
    //RHS => int 
    //LHS => int
    //printf("%d",a); // 4      
    
    //b = 23 / 5; // int / int => int => 4.6 => 4 
    // RHS => int ( 4 )
    // LHS => float  
    // 4 => 4.0  
    //printf("%.1f",b); // 4.0      

     b = 23.0f / 5;// float / int => float   
     //RHS => 4.6 => float => 4.6 
     //LHS => float 
     printf("%.1f",b); // 4.6      
    return 0; 
}
/*
    double 
    float
    int 
    char 

    if 2 operands are of diff types then smaller 
    type is promoted to larger type for calculation 

    int + int => int 
    int + double => double 
    double + float => double 
    char * int => int 
    short / int => int 
    int / float => float 

    char and short values are promoted to "int" for 
    arithmatic calculation 

       char + char => int 
       short + char => int 
       char + short => int 

        typecasting 
       (float)23 => 23 is a int but consider it as a float 
       for this calculation 
*/
// / => operator => quotient 