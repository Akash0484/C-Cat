#include<stdio.h>
int arr[5]; 
int main()
{

    // [] => subscript operator 
     int arr[5] = {1,2,3,4,5}; // init list 
    //  printf("%d ",sizeof(arr)); // 5 * 4 => 20 
    //  printf("%d ",sizeof(arr[1])); // 4 * 1 => 4
    //  printf("%d ",sizeof(arr[-1])); // 4 * 1 => 4 
    /*
            array index starts from 0 to n-1 
        arr 

             1    2    3    4    5 
            [0]  [1]  [2]  [3]  [4]
            100  104  108  112  116 
    */
    
      int index; 
      for(index = 0 ; index < 5 ; index++)
            printf("%u  ",&arr[index]);   
    
    //name of array represents the base address 
    //The array name is treated as address of 0th element in any runtime exp
    printf("\n"); 

    //printf("%u ",arr); //100 
    //printf("%u ",arr + 0); //100 
    //printf("%u ",*(arr + 0) );//1 
    /*
            *(arr + 0 )
            *(100 + 0 * 4 )
            *(100)
            valueat(100)
            1 
    */
    //printf("%u ",arr + 1); //104 
    /*
            arr + 1 
            100 + 1 
            100 + 1 * 4 
            104 
    */  
    //printf("%u ",*(arr + 1) );
    /*  
             *(arr + 1)
             *(100 + 1 )
             *(100 + 1 * 4)
             *(104)
             valueat(104) 
             2  
    */
    //printf("%u ",arr + 2); //108 
    /*
            arr + 2
            100 + 2 * 4 
            100 + 8 
            108 
    */
    //printf("%u ",*(arr + 2)); //3 
    /*
            *(arr + 2)
            *(100 + 2)
            *(100 + 2 * 4)
            *(108)
            valueat(108)
    */ 
    return 0;
}
