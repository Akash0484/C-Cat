#include<stdio.h> 

// cal peri of rectangle 
// peri = 2 * ( l + b )

int main( )
{
    // variable delcaration 
    double length , breadth , peri; 
    
    //1.Input 
    printf("Enter the length and breadth"); 
    scanf("%lf%lf",&length,&breadth); 

    //2.Processing 
    //2 * ( l + b )
    peri = 2 * ( length + breadth ); 

    //3.output 
    printf("peri = %.2lf\n",peri); 
    return 0; 
}
 