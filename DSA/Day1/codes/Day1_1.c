#include<stdio.h>
#define SIZE 10 

int comparisons = 0;
void display_array_elements(int arr[]); 
int linear_search( int arr[], int key ); 
int main()
{
    int arr[SIZE] = {30,70,90,10,50,80,100,20,40,60}; 
    int key; 
    display_array_elements(arr); 
    printf("Enter the key"); 
    scanf("%d",&key); 
    if(linear_search(arr,key))
    {
        printf("%d is found in an array,no of comparisons are %d : \n",key,comparisons); 
    }
    else 
    {
        printf("%d is not found in an array,no of comparisons are %d : \n",key,comparisons); 
    }
    
    return 0;
}

int linear_search( int arr[], int key )
{
     int index = 0; 
     comparisons = 0;

     for( index = 0 ; index < SIZE ; index++)
     {
          comparisons++;
          if(key == arr[index])
              return 1;  
           
     } 
     return 0; 
}


void display_array_elements(int arr[])
{
    int index; 
    for( index = 0 ; index < SIZE ; index++ )
            printf("%4d",arr[index]); 
    printf("\n");          
}