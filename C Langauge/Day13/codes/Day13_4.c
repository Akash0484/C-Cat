#include<stdio.h> 
//#pragma pack(1)
// struct Test
// {
//     int a; // 4 
//     char b;// 1   
// };
// struct Test
// {
//     int a; // 4 
//     char b;// 1   
//     int c; // 4 
// };
struct Test
{
    int a; // 4 
    char b;// 1   
    double d1; // 8  
    int c; // 4 
}; // => 17 
// 8 16 24 


int main( )
{
    printf("%d",sizeof(struct Test)); 
    return 0; 
}

//geeksforgeeks.com 