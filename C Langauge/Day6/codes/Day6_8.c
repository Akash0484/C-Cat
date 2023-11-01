#include<stdio.h> 

int main( )
{
    int num; 
    printf("Enter the num"); 
    scanf("%d",&num); 

    if(num == 1)
      printf("one"); 
    else if(num == 2)
      printf("Two"); 
    else if(num == 3)
      printf("Three"); 
    else 
      printf("Invalid");   
    return 0; 
}
