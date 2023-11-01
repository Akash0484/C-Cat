#include<stdio.h> 
//int arr[3][3]; // 0 
int main( )
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    
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
      
      int row; 
      int col; 

      for( row = 0 ; row < 3 ;  row++)
      {
          for(col = 0 ; col < 3 ; col++)
          {
                printf("%u  ",&arr[row][col]); 
          }
          printf("\n"); 
      }
      printf("\n");   

      
      //printf("%u ", *(arr + 0) + 1  );//104 
      //                 &arr[0][1]
      //printf("%u ", *(*(arr + 0) + 1 )  );//2      
      
    //printf("%u ",*(arr + 1) + 2 ); //120 

    //printf("%u " , *(*(arr + 1) + 2 ) ); //6 
      
      //printf("%u ",*(arr + 2) + 1 ); //128

      //printf("%u ", *(*(arr + 2) + 1 ) ); //8   
        
        printf("%u ",arr[2][1]); // array notation 
        printf("%u " ,*(*(arr + 2 ) + 1 ) ); // pointer notation  

      return 0; 
}
/*
        arr[0][0] ==>  *(*(arr + 0) + 0 )  

        arr => outer address 
        *arr=> inner address 
        *(*(arr + 1) ) ==> value

        *(arr +1) + 1 => address 
           &arr[1][1]   
        *(*(arr +1) + 1 ) => value 
           arr[1][1]    
*/