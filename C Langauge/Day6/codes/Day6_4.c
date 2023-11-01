#include<stdio.h> 

int main( )
{
    // max of 2 numbers 
    int num1,num2; 
    printf("Enter the 2 numbers"); 
    scanf("%d%d",&num1,&num2); 

    if(num1 > num2)
       printf("%d is greatest",num1);
    else 
      printf("%d is greatest",num2);
    return 0; 
}
// num1  = 100,num2 = 200 , num3 = 1 
/*
        nested if-else 

        if()
        {
            if()
            {

            }
            else 
            {

            }
        }
        else 
        {
            if()
            {

            }
            else 
            {
                
            }
        }

*/