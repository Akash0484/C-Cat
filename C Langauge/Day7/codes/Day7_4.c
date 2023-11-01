#include<stdio.h> 

int main( )
{
    // typedef => alias 
    // alias => datatype 
    int num; 
    typedef int INT;
    INT a; 
    int c;   
    enum color 
    {
           RED,BLUE,GREEN  
    }; 
    enum color c1; 
    //datatype  variable-name  
    typedef enum color e_c; 
    e_c c2,c3; 
    size_t i;  
    return 0; 
}