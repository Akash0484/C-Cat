#include<stdio.h> 
// Input a ammount and if ammount is greater than or 
// equal to 5000 give 10% discount 

int main( )
{
    double ammount,discount; 

    //1.Input
    printf("Enter the ammount"); 
    scanf("%lf",&ammount);//4000.00  

    //2.Processing 
    if( ammount >=5000.00)// if(5000.00>=5000.00) // if(1)
        ammount = ammount * 0.90; 
    printf("ammount = %.2lf",ammount); // 4000.00  
    
    return 0; 
}
// int main( )
// {
//     double ammount,discount; 

//     //1.Input
//     printf("Enter the ammount"); 
//     scanf("%lf",&ammount);//4000.00  

//     //2.Processing 
//     if( ammount >=5000.00)// if(5000.00>=5000.00) // if(1)
//     {
//         discount = ammount * 0.10; 
//         ammount = ammount - discount;  
//     }
//     printf("ammount = %.2lf",ammount); // 4000.00  
    
//     return 0; 
// }