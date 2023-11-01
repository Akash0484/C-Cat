#include<stdio.h>

//command line arguments 
int main(int argc, char  *argv[])
{
    //argc => argument count  
    //printf("%d",argc);  
    // printf("%s ",argv[0]); // .\a.exe 
    // printf("%s ",argv[1]); // 1
    // printf("%s ",argv[2]); // 2 

    int i; 
    for( i = 0 ; i < argc ; i++)
         printf("%s ",argv[i]); 
    return 0;
}
//atoi
//string -> int  
