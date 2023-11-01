#include<stdio.h> 
#include<stdlib.h> 

int main( )
{
    FILE *fptr;  
    char ch; 
//File pointer (stream pointer ) is a pointer to a structure of type FILE 
//file pointer points to this structure ( identifier the file )    
    
    if((fptr = fopen("sunbeam.txt","r"))==NULL)
    {
        printf("Error"); 
        exit(1); 
    }
    
    while(( ch = fgetc(fptr))!=EOF)
    {
           printf("%c",ch);   
    }
    fclose(fptr); 

        
    return 0; 
}