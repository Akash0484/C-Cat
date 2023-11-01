#include <stdio.h> 
#include<limits.h> 
#include"Day12_1.h" 

int main( )
{
    double rad,area; 
    printf("Enter the radius"); 
    scanf("%lf",&rad); 

    area = PI * rad * rad; 
    printf("area = %lf",area);   
    return 0; 
}

//gcc Day12_1.c -E -o Day12_1.i 