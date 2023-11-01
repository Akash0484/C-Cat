#include<stdio.h> 

int main( )
{
    // for loops 
    // int i; 
    // int j; 
    // for( i = 1; i<=5 ; i++)// i = 1,2,3,4,5,6 
    // {
    //     printf("for each i %d   ",i); 
    //     for( j = 1 ; j<=5 ; j++)//j=1
    //     {
    //         printf("     j%d",j); 
    //     }
    //     printf("\n");
    // }

    // int i; 
    // int j; 
    // int k; 
    // for( i = 1; i<=5 ; i++)// i = 1,2,3,4 
    // {
    //     printf("for each i %d   ",i); 
    //     for( j = 1 ; j<=5 ; j++)//j=1
    //     {
    //         printf("\n for each j %d   ",j); 
    //         for( k = 1 ; k<=5 ; k++)
    //         {
    //             printf(" k %d   ",k); 
    //         }
    //         printf("\n\n"); 
    //     }
        
    // }

     int i; 
    int j; 
    int k; 
    for( i = 1; i<=5 ; i++); 


    {
        printf("%d",i); // 6  
        for( j = 1 ; j<=5 ; j++); 
        
        
        {
            printf("\n%d",j); // 6  
            for( k = 1 ; k<=5 ; k++); 
           
            {
                printf("\n %d",k); // 6  
            }
            printf("\n\n"); 
        }
        
    }
    return 0; 
}
