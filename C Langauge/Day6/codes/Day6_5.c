#include<stdio.h> 

int main( )
{
    int num1 = 100;
    int num2 = 2000; 
    int num3 = 3000; 

    if( num1 > num2) // if(100 > 2000)=> F 
    {
          if(num1 > num3)
          {
              printf("num1 is greatest"); 
          }
          else 
          {
              printf("num3 is greatest"); 
          }  
    } 
    else 
    {
            if( num2 > num3 ) // if( 2000 > 3000)=> if(0)
            {
                printf("num2 is greatest"); 
            }
            else 
            {
                printf("num3 is greatest"); 
            }
    }
    return 0; 
}