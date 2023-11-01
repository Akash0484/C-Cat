#include <stdio.h>

int main()
{

    // [] => subscript operator
    int arr[5] = {11, 22, 33, 44, 55}; // init list
                                  /*
            array index starts from 0 to n-1 
        arr 

             11  22   33   44    55 
            [0]  [1]  [2]  [3]  [4]
            100  104  108  112  116 
    */

    int *ptr = arr; 
    //printf("%d ",*ptr); //11 
      
    printf("%d ",++*ptr); 
    //printf("%d ",arr[0]); //12 
    
    printf("%d ",*++ptr); // 22 

    printf("%d ",*ptr++); //22 

    printf("%d ",*ptr); //33   

      return 0;
}

// ++*ptr++; 