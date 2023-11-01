#include <stdio.h>

int main()
{
    // Entry controlled  loop ( while , for)
    // for loop
    // int i;
    // for( i = 1 ; i <= 5 ; i++ )
    // {
    //     printf("%d",i); //1 2 3 4 5
    // }
    // printf("\n Outside the loop %d",i); // 6

    /*
        for(step1 ; step2 ; step4 )
        {
            step3 
        }
        // step1 is executed only once 

    */

    // int i = 1 ;
    // for(  ; i <= 5 ; i++ )
    // {
    //     printf("%d",i); //1 2 3 4 5
    // }
    // printf("\n Outside the loop %d",i); // 6

    // int i = 1 ;
    // for(  ; i <= 5 ;  )
    // {
    //     printf("%d",i++); //1 2 3 4 5
    // }
    // printf("\n Outside the loop %d",i); // 6

    // int i = 1 ;
    // for(  ;    ;  ) // infinite loop
    // {
    //     printf("%d",i++); //1 2 3 4 5
    // }
    // printf("\n Outside the loop %d",i); // 6

    // int i;
    // for( i = 1 ; i < 10 ; i++ );
    //     printf("%d",i);

    int i;
    int j;
    for (i = 1, j = 1; i <= 5, j <= 10; i++, j++)
        printf("%d %d\n", i, j);

    return 0;
}