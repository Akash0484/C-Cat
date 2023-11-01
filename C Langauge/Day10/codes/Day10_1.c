#include<stdio.h> 

int main( )
{
    //char str1[5] = {'A','B','C','D','E'};// init list 
    //char array  
    
    //char str2[5] = {'a','b','c','d','\0'};
    //5 char array terminated with \0 => string 

    //char str3[5]={'I','N','F','O'}; 
    /*
            5 char array terminating with \0 => string 
            when array is initialized partially at the 
            time of decln rest ele are init to 0 
    */

    char str4[] = {'s','u','n','b','e','a','m'}; 
    // char array 

    //printf("%s",str4); 

      int i;
      for( i = 0 ; i < 7 ; i++)
        putchar(str4[i]); 
 
    // for( i = 0 ; i < 5 ; i++)
    //     putchar(str1[i]); 

    // for( i = 0 ; str2[i]!='\0' ; i++)
    //     putchar(str2[i]); 
    
    // for( i = 0 ; str3[i]!='\0' ; i++)
    //     putchar(str3[i]); 
    
    
    return 0;
}
/*
        
        char name[4] = {'a','b','c','d}; // char array 
        char name[4] = {'a','b'}; // string 
        char name[] = {'a','b'}; // char array 
        char name[4] = {'a','b','c','\0'}; // string 
*/