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

    int *ptr1 = &arr[4]; //116
    int *ptr2 = &arr[0]; //100
    int ans;
    ans = ptr1 - ptr2;
    /*
            ptr1  -  ptr2
            (ptr1  -  ptr2) / scale factor of ptr1 
            (116  -  100) / 4
            16/4
            4
     */
    //printf("ans = %d", ans);
      
      printf("%u ",arr); //100 
      printf("%u ",arr + 1); //104 
      printf("%u ",&arr + 1); //120 
      /*
                100 + 1 
                100 + 1 * 20 
                100 + 20
                120 
      */  

    return 0;
}
/*
    int num1 = 10; //104 
    int num2 = 20; //100 

    int *ptr1 = &num1; 
    int *ptr2 = &num2; 

    ptr1 - ptr2 =>
    (ptr1 - ptr2) /scale factor of ptr1 
    (104  -  100 ) /  4
        4 / 4 
          1      
    

*/