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

     int *ptr = arr; // pointer to 1D array 
    
     //printf("%u ",*(ptr + 2) );//3 //pointer notation 
     //printf("%u ",ptr[2] );//3 // array notation 
    
    /*
            ptr[1]  =>  *(ptr + 1)
            ptr[2]  =>  *(ptr + 2)
    */
    //  printf("%u ",ptr[2] );//3 
    //  printf("%u ",2[ptr] );//3
    //  printf("%u ",ptr[1+1] );//3 
    //  printf("%u ",*(ptr + 2) );
    //  printf("%u ",*(2 + ptr) );
    //  printf("%u ",*(ptr + 1 + 1)); 
     
     printf("%d ",ptr[-1]); //G  
     /*
            ptr[-1]
            *(ptr + -1)
            *(ptr - 1)
            *(100 - 1 * 4)
            *(96)
            valueat(96)

     */ 
     return 0;
}
