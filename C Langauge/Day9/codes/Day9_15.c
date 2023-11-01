#include<stdio.h> 
//void readArray(int arr[]);//array notation 
void readArray(int *ptr); //pointer notation 
void printArray(int arr[]); //array notation 
int main( )
{
    int arr[5];  // size => 20 
    //arr++; // 100++ => 100 = 100 + 1  => NOT OK 
    printf("Enter the array elements:: \n");
    readArray(arr); // base address
    printf("array elements are :: \n");
    printArray(arr);    
    return 0; 
}

void readArray(int *ptr)//pointer notation 
{
    //printf("%d",sizeof(ptr)); // 4 ( pointer size ) 
    //ptr++; //(internally it is a pointer ) // OK 
    int i; 
    for( i = 0 ; i< 5 ; i++)
          scanf("%d",&ptr[i]);   
}
// void readArray(int arr[])//array notation 
// {
//     //printf("%d",sizeof(arr)); // 4 ( pointer size ) 
//     //arr++; //(internally it is a pointer ) // OK 
//     int i; 
//     for( i = 0 ; i< 5 ; i++)
//           scanf("%d",&arr[i]);   
// }
void printArray(int arr[])//array notation 
{
    
    int i; 
    for( i = 0 ; i< 5 ; i++)
          printf("%d ",arr[i]);   
}
/*
             1    2    3    4    5  
            [1]  [2]  [3]  [4]  [5]
            100  104  108  112  116 
        arr[1] => 1

        *(arr + 1) => 2 
        *(100 + 1)
        *(100 + 1 * 4)
        *(104)
          2 
*/