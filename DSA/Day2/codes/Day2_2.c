#include<stdio.h> 

#define SIZE 6 
#define SWAP(a,b) {int t = a ; a = b ; b = t ;}
void display_array_elements(int arr[]); 
void selection_sort(int arr[ ]); 
void bubble_sort( int arr[]); 
void insertion_sort(int arr[]); 
int main( )
{
    int arr[SIZE] = {10,20,30,40,50,60};
    printf("Before sorting"); 
    display_array_elements(arr); 
    //selection_sort(arr); 
    //bubble_sort(arr); 
      insertion_sort(arr); 
    printf("\n After sorting"); 
    display_array_elements(arr); 
    return 0; 
}

void insertion_sort(int arr[])
{
    int i; 
    int iterations = 0;
    

    for( i = 1 ; i < SIZE ; i++)
    {
        int j = i - 1; 
        int key = arr[i]; 
        iterations++;
        while(j>=0 && key < arr[j])
        {
            
            arr[j+1] = arr[j]; 
            j--; 
            
        }
        arr[j+1] = key; 
    }
    printf("number of iterations is %d",iterations); 
    
}



//effecient bubble sort using flag 
void bubble_sort( int arr[])
{
    int pos; 
    int iteration = 0; 
    int comparisons = 0; 
    int flag = 1; 
    int it; 
    // Iterations 
    for ( it = 0 ; it < SIZE - 1 && flag == 1 ; it++)
    {
        iteration++;
        flag = 0;  
        for(pos = 0 ; pos < SIZE - it - 1 ; pos++)
        {
            comparisons++;
            if(arr[pos] > arr[pos+1])
            {
                SWAP(arr[pos],arr[pos+1]); 
                flag = 1;   
            } 
        }

    }
    printf("\n number of iterations are %d",iteration); 
    printf("\n number of comparisons are %d",comparisons);  

}

// void bubble_sort( int arr[])
// {
//     int pos; 
//     int iteration = 0; 
//     int comparisons = 0; 
//     int it; 
//     // Iterations 
//     for ( it = 0 ; it < SIZE - 1 ; it++)
//     {
//         iteration++; 
//         for(pos = 0 ; pos < SIZE - it - 1 ; pos++)
//         {
//             comparisons++;
//             if(arr[pos] > arr[pos+1])
//                 SWAP(arr[pos],arr[pos+1]);   
//         }

//     }
//     printf("\n number of iterations are %d",iteration); 
//     printf("\n number of comparisons are %d",comparisons);  

// }


void selection_sort(int arr[ ])
{
     int sel_pos; 
     int pos; 
     int iteration = 0; 
     int comparisons = 0; 
     //outer-loop => iterations 
     for(sel_pos = 0 ; sel_pos < SIZE - 1 ; sel_pos++)
     {
         iteration++; 
         for(pos = sel_pos + 1 ; pos < SIZE ; pos++)
         {
               comparisons++;
               if(arr[sel_pos] > arr[pos])
               {
                    SWAP(arr[sel_pos],arr[pos]); 
               } 
         }
     }
    printf("\n number of iterations are %d",iteration); 
    printf("\n number of comparisons are %d",comparisons);  
}

void display_array_elements(int arr[])
{
    int index; 
    for( index = 0 ; index < SIZE ; index++ )
            printf("%4d",arr[index]); 
    printf("\n");          
}
/*
    // Pointers 
        1.functions ( returning address )
        2.Dynamic memory allocation ( dangling pointer , memory leakage ) 
        3.self referential Structure 
        4.Pass by address 

*/