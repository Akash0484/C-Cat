#include<stdio.h> 


struct A
{
    int x; 
}; 
struct B
{
    int y; 
}; 
int main( )
{
    struct A a = {10}; 
    struct B b; 
    b = a;  
    return 0; 
}


// struct book 
// {
//     int id; 
//     char name[20]; 
//     char author[20]; 
// }; 
// int main( )
// {
//     struct book b1 = {1,"Cprogramming","DennisRitchie"};
//     struct book b2; 
//     b2 = b1; 
//     printf("%d %s %s",b2.id,b2.name,b2.author);   
//     return 0; 
// }