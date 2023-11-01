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

    
    //printf("%d ",arr[0]); // array notation 
    //printf("%d ",*(arr + 0)); // pointer notation 
    /*
            arr[1]      ==>       *(arr + 1)  
    */
    // printf("%d ",arr[0]); // array notation
    // printf("%d ",0[arr]); // array notation
    // printf("%d ",arr[1-1]); // array notation 
    // printf("%d ",*(arr + 0)); // pointer notation
    // printf("%d ",*(0 + arr)); // pointer notation
    // printf("%d ",*(arr + 1 - 1)); // pointer notation   
    
    //printf("%d ",arr[-1]);
       /*
                arr[-1]
                *(arr + -1)
                *(arr - 1)
                *(100 - 1)
                *(100 - 1*4)
                *(100 - 4)
                *(96)
                valueat(96)
                Garbage 
       */ 

    //printf("%d ",arr[ arr[0 ] ]); 
    //           arr[    1     ]
    //                   2   
    
    //printf("%d ",arr[0]++); //1
    //printf("%d ",arr[0]); //2 
    printf("%d ",++arr[0]); //2
    
    return 0;
}
