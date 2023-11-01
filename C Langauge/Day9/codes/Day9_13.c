#include <stdio.h>
int arr[5];
int main()
{

    // [] => subscript operator
    int arr[5] = {1, 2, 3, 4, 5}; // init list
                                  /*
            array index starts from 0 to n-1 
        arr 

             1    2    3    4    5 
            [0]  [1]  [2]  [3]  [4]
            100  104  108  112  116 
    */

    //   int index;
    //   for(index = 0 ; index < 5 ; index++)
    //         printf("%u  ",&arr[index]);

    //name of array represents the base address
    //The array name is treated as address of 0th element in any runtime exp
    //printf("\n");

    int *ptr = &arr + 1;  // 100 + 1 * 20 => 120 
    printf("%d ",*ptr); // NO value at that location  
    ptr--; 
    /*
            ptr = ptr - 1 
                  120 - 1 
                  120 - 1 * 4 
                  120 - 4
                  116   
    */   
    printf("\n %d ",*ptr);// 5    
    return 0;
}
