#include<stdio.h>

int main( )
{
    int num = 10; 
    int *ptr = &num; 

    printf("ptr = %u\n",ptr); //100 

    //pointer arithmatic 
    ptr = ptr + 1;   
    /*
          ptr + n = 
          ptr + n * scale factor of ptr



          100 + 1 
          100 + 1 * 4 
          104   

    */   
     printf("ptr = %u\n",ptr); //104 
     ptr--; // ptr = ptr - 1; 
     /* 
            ptr = ptr - 1 
                  104 - 1 
                  104 - 1 * 4 
                  104 - 4 
                  100 
     */
     printf("ptr = %u\n",ptr); //100
     printf("ptr = %u\n",*ptr); //10      
    return 0; 
}
/*
          char ch = 'A';
          char *cptr = &ch;    
          ptr + n * scale factor of ptr
          ptr + 10 
          100 + 10 
          100 + 10 * 1 
          110   

          float ch = 'A';
          float *cptr = &ch;    
          ptr + n * scale factor of ptr
          ptr + 10 
          100 + 10 
          100 + 10 * 4 
          140   


          ptr + 1 
          100 + 1 
          100 + 1 * 4 
          104 

          ptr + 20; 
          100 + 20 * 4 
          100 + 80 
          180   

*/

/*
        int num1=1 , num1 = 2; 
        int *ptr1 = &num1; 
        int *ptr2 = &num2; 

        int res; 
        res = ptr1 + ptr2; 
              ptr1 / ptr2;
              ptr1 * ptr2;
              ptr1 % ptr2;

              ptr + 1 ; 
              ptr - 1 ;

              ptr * 1; 
              ptr / 1; 
              ptr % 1;         

             *ptr1 + *ptr2 => OK 
              ptr1 - ptr2 => OK 

*/
