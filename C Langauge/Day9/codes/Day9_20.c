#include<stdio.h> 

int main( )
{
    int num = 10; 
    const int *ptr = &num; 
    printf("%d\n",*ptr);
    *ptr = 20;  
    printf("%d\n",*ptr); //20
    printf("%d\n",num);//20 
    return 0; 
}
// int main( )
// {
//     const int num = 10; 
//     int *ptr = &num; 
//     printf("%d\n",*ptr);
//     *ptr = 20;  
//     printf("%d\n",*ptr); //20
//     printf("%d\n",num);//20 
//     return 0; 
// }