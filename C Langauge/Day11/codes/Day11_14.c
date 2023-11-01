#include<stdio.h> 
void readArray(int arr[3][3]); 
void printArray(int arr[3][3]); 
int main( )
{
    int arr[3][3]; 
    printf("Enter the array elements"); 
    readArray(arr); //base address 
    printf("Array elements are \n"); 
    printArray(arr); 
    return 0; 
}
void readArray(int arr[3][3])
{   
    int row, col; 
        for( row = 0 ; row < 3 ;  row++)
        {
          for(col = 0 ; col < 3 ; col++)
          {
                scanf("%d",&arr[row][col]); 
          }
          
      }
}
void printArray(int arr[3][3])
{   
    int row, col; 
        for( row = 0 ; row < 3 ;  row++)
        {
          for(col = 0 ; col < 3 ; col++)
          {
                printf("%4d",arr[row][col]); 
          }
          printf("\n"); 
      }
}