#include<stdio.h> 

int main( )
{
    // / => quotient 
    // % => remainder
    //printf("%d ",1234 / 10); // 123 
    //printf("%d ",1234 % 10); // 4 
    
    /*
            2 * 1 = 2 
            2 * 2 = 4 
            2 * 3 = 6 
    */
    int num = 2; 
    // printf("%d * %d = %d\n",num,1,num * 1);
    // //       2 * 1  =  2     
    // printf("%d * %d = %d\n",num,2,num * 2);
    // printf("%d * %d = %d\n",num,3,num * 3);

    /*
            2 
            4 
            6
            8
            10 

    */
    printf("%d\n",num * 1);//2 
    printf("%d\n",num * 2);//4 
    printf("%d\n",num * 3);//6    
    return 0; 
}