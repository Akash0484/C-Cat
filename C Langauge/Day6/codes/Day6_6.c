#include<stdio.h> 

int main()
{
    // minimum of 3 numbers 
    int a,b,c; 
    printf("Enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c); // 11 22 3  
    
    //  11 < 2 && XXX
    if( a < b && a < c )
    {
        printf("min = %d",a); 
    }
    else 
    {
            if(b < c ) // if(22 < 3) => if(0)
               printf("min = %d",b); 
            else 
               printf("min = %d",c); 
    }
    
    return 0; 
}