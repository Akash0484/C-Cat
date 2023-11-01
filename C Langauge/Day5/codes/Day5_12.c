#include<stdio.h> 

int main( )
{
    // logical opr 
    // && , || , ! ( 1 or 0 )
    
    //logical && operator 
    // in C any non-zero ( including -ve ) is considered 
    // as true
    // 1,2,4,-1,22,100 => True
    //   0 => False 

    // printf("%d ",11 && 12); // 1 
    // //          T  &&  T  => T  
    // printf("%d ",11 && 0); // 0 
    // //           T && F   => F  
    // printf("%d ",0 && 20 ); // 0
    // //           F && T   => F  
    // printf("%d ",0 && 0 ); // 0
    // //           F && F => F      
    
    // printf("%d ",11 || 12); // 1 
    // //          T  &&  T  => T  
    // printf("%d ",11 || 0); // 1 
    // //           T || F   => T  
    // printf("%d ",0 || 20 ); // 1
    // //           F || T   => T  
    // printf("%d ",0 || 0 ); // 0
    // //           F && F => F      
  
    //logical not (!)
    // T => !T => F => 0 
    //printf("%d",!10);// 0 
    // 10 => True => !T => False => 0  

    //printf("%d",!0); // 1 
    // 0 => F => !F => T  
    
    printf("%d ",!!-10); // 1 
    // -10 => True =>!T => F => !F => T    
     
    return 0; 
}
// marks > 65 && marks < 80 => True 
//    F       &&  T  => F 
//    T       &&  F   => F 
//    T       &&  T   => T 
//    F       &&  F   => F  


// marks > 65 || marks < 80 => True 
//    T       ||  F  => T 
//    F       ||  T   => T 
//    T       ||  T   => T 
//    F       ||  F   => F  

/*
        int a; 
        a=!3; // logical not 
        a!=3; // relational opr    

*/