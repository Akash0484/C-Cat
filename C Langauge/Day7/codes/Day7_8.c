#include<stdio.h> 
double addition( double x  , double y  ); 
void multiplication( double a , double b ); 
int division( int num , int den ); 
void subtract( void  ); 
int main()
{
    int num,den,ans; // local variables 
    double num1 = 10.00 , num2 = 2.00 , res; // local variables 
    res = addition( num1 , num2); // function call 
    printf("\n res = %.2lf",res);
    multiplication(2.0 , 4.0); // function call  

    printf("\nEnter the 2 numbers"); 
    scanf("%d%d",&num,&den); // 4 2 
    ans = division(num,den); 
    printf("\n ans = %d",ans); 

    subtract( ); 

    return 0;
}
void subtract( void  )
{
    int p,q,r; // local variables 
    printf("\n Enter the 2 numbers"); 
    scanf("%d%d",&p,&q); 
    r = p - q; 
    printf("\n r = %d",r);
}

int division( int num , int den )
{
    int r ;
    r = num / den; 
    return r; 
}

void multiplication( double a , double b )
{
       double c; 
       c = a * b; // 2.0 * 4.0 
       printf("\n c = %.2lf",c);  
}
double addition( double x  , double y  )
{
        double res; 
        res = x + y; // 10.00 + 2.00 => 12.00 
        return res; 
}
