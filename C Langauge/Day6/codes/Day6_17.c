#include<stdio.h> 

int main( )
{
    // jump statments => return , break , continue , goto 
    
    // int i = 1; 
    // if(i == 1)//continue statement not within a loop
    //    continue; 
    
    int i; 
    for( i = 2 ; i <=10 ; i++)
    {
         if(i % 2 == 0)
            continue;
         printf("%d",i); // 3 5 7 9         
    }
    
   
    return 0; 
}