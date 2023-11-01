#include <stdio.h>
//int arr[3][3]; // 0
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    /*
        arr 
                     [0]    [1]    [2]
           [0]        1      2      3
           100       100     104    108  

           [1]        4      5      6     
           112       112     116    120 

           [2]        7      8      9 
           124       124     128    132 

    */

    int *ptr[3] = {(int*)arr, (int*)arr + 1, (int*)arr + 2};
    //               100           104            108

    int row;
    int col;

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%u  ", &arr[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    // array notation
    printf("%u ",ptr[0]); //100
    printf("%u ",ptr[1]); //104
    printf("%u ",ptr[2]); //108

   
    return 0;
}
