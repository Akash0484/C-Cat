#include<stdio.h> 

int main( )
{
    // increment / decrement operator ( ++ , -- )
    /*
            int num = 1; 
            num = num + 1; 
            num+=1;    
    */
    //int num = 2;
    //int ans = num; 
    //printf("ans = %d num = %d",ans,num); // 2 2 

    // int ans; 
    // int num = 2; 
    // ans = ++num; // pre-increment 
    // printf("ans = %d num = %d",ans,num); // 3 3 

    // int ans; 
    // int num = 2; 
    // ans = num++; // post-increment 
    // printf("ans = %d num = %d",ans,num); // 2 3 

    // int ans; 
    // int num = 2; 
    // ans = --num; // pre-decrement  
    // printf("ans = %d num = %d",ans,num); // 1 1 

    int ans; 
    int num = 2; 
    ans = num--; // pre-decrement  
    printf("ans = %d num = %d",ans,num); // 2 1 


    return 0; 
}
/*
    ++num++ => Lvalue error 
    2++=> constant cannot be incremented 
    2 = 2 + 1 // lvalue error  

*/

/*
    num+=1 // num = num + 1; 
    num = +1   

    num-=1; // num = num - 1 
    num = -1;  

*/