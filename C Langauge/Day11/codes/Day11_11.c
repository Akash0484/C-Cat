#include<stdio.h> 


int main( )
{
    char cities[][11] = {"Delhi","Chandigarh","Noida"}; 

    /*          [0]  [1]  [2]  [3]  [4]  [5]  [6]  [7]  [8]  [9]  [10]
        [0]      D    e    l    h    i   \0 

        [1]      C    h    a    n    d   i    g     a    r    h    \0 

        [2]      N    o    i    d    a   \0  

    */

    //printf("%s ",cities[0]); 
    //printf("%s ",cities[1]);
    //printf("%s ",cities[2]);  
    
    //printf("%d ",sizeof(cities)); // 11 * 3 ==> 33 
    //printf("%d ",sizeof(cities[0])); // 11 * 1 ==> 11 
    //printf("%d ",sizeof(cities[0][0])); // 1 * 1 => 1 

      // array notation   
      //printf("%c",cities[0][0]);// D   
      //printf("%c",cities[0][1]);// e   

      printf("%c ",*(*(cities + 0)+0));// D 
      printf("%c ",*(*(cities + 0)+1));// E    
      printf("%c ",*(*(cities + 0)+2));// L 
      printf("%c ",*(*(cities + 0)+3));// H
      printf("%c ",*(*(cities + 0)+4));// I
      printf("%d ",*(*(cities + 0)+5));// 0   

    
    
    return 0; 
}