#include<stdio.h>

int main( )
{
    int num1 = 10; 
    int num2 = 20; 
    int ans; 
    /*
            if(num1 > num2)
                 exp1 
            else 
                 exp2    
    */
    
    ans = num1 > num2 ? num1 : num2; 
    //      condtn    ? exp1 : exp2 
    //       10>20    ?  XXX ? exp2   
    printf("%d",ans); // 20 
    return 0; 
}
/*
        greatest of 3 numbers 
        num1,num2,num3 
 ans = num1 > num2 ? ( num1 > num3 ? num1 : num3 ) : ( num2 > num3 ? num2 : num3 );         
         condtn    ?            exp1               :                exp2     

    greatest of a,b,c 

    a>b && a>c ? printf("%d",a) : ( b > c ? printf("%d",b) : printf("%d",c) ); 

    max = a>b && a>c ? a : ( b > c ? b : c );
    printf("max = %d",max);  


*/