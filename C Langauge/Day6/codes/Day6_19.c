#include<stdio.h> 

int main( )
{
    //int x; 
    //x = printf("Hello world\n\t"); 
    //printf("\n %d",x);//11  

    // int a = 10; 
    // int x; 
    // x = printf("%10d",a);
    // //                  1 0 
    // //  - - - - - - - - - -  
    // printf("\n %d",x);  

    int num = 10; 
    int x; 
    x = printf("num = %d",num); 
    //          num = 10

    printf("\n %d",x); // 8 
    return 0; 
}
/*

        #include<stdio.h>
int main(void)
{
    int val = 10;
    float fval = 56.789643;
    
    printf("%5d%*.*f",val,val,val-8,fval);
                %10.2f
                          5 6 . 7 8  
                - - - - - - - - - -  

return 0;
}
*/