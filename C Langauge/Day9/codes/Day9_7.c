#include<stdio.h>
int arr[5]; 
int main()
{
    //int num1=1,num2=2,num3=3,num4=4,num5=5
    //array ( 1D )
    // [] => subscript operator 
     int arr[5] = {1,2,3,4,5}; // init list 
    //int arr[5] = {1,2,3}; // partial init 
    //int arr[5];// Garbage  
    //int arr[]; // NOT OK 
    //int arr[] = {1,2,3,4,5}; //OK  
    //int arr[5] = {1,2,3,4,5,6,7,8}; // NOT OK 
    
    /*
            array index starts from 0 to n-1 
        arr 

             1    2    3    4    5 
            [0]  [1]  [2]  [3]  [4]
            100  104  108  112  116 
    */
    
      int index; 
      for(index = 0 ; index < 5 ; index++)
            printf("%d ",arr[index]);   
    
    
    return 0;
}
//int arr[10]; // 0 to 9 
/*
        int n; 
        scanf("%d",&n);//10  
        int arr[n]; 

        int arr[100] ={1};// 100 * 4 => 400 
        static approach (arr size should be given at compile time ) 
        array => static ( compile time )

        static => compile time 
        dynamic => runtime ( malloc , calloc )
*/
