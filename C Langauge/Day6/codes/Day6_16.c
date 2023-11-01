#include<stdio.h> 

int main( )
{
    // jump statments => return , break , continue , goto 
    
    int i = 1; 
    // if(i == 1)//break statement not within loop or switch
    //    break; 
    
    
    for( i = 1 ; i <=5 ; i++)
    {
        printf("%d",i); // 1 2 3   
        if(i == 3)
           break; 
    }
    printf("\n outside the loop %d",i); // 3 
   
    return 0; 
}