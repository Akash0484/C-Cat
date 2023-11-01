#include<stdio.h> 

int main( )
{
    // char str1[20] = "Sunbeam";
    // char str2[20] = "Sunbeam";

    // if(str1 == str2) // comparing the address ( strcmp)
    //     printf("Same"); 
    // else
    //     printf("not same"); 
    
    //  char *str1 = "Info"; // pointer to string  
    //  char *str2 = "Info"; // pointer to string  

    //  if(str1 == str2)
    //     printf("same"); 
    // else 
    //     printf("not same"); 


    // char name[20] = "Sunbeam"; 
    // name[0] = 'A'; 
    // printf("%s",name); 

      //char *str = "Sunbeam";//Pointer to string ( RO data section ) 
      //printf("%s",str); 
      //str[0] = 'A'; // *(str + 0 )=> 'A'   
      //printf("%s",str);// Runtime error 
      // Trying to modify the string allocated from RO Data section 
    
    char str5[20] = "Sunbeam"; 
    //printf("%s",str5); 

    printf(str5); 
    printf("\n"); 
    printf(str5 + 1 ); 
    printf("\n");
    printf(str5 + 2 );
    printf("\n");
    printf(str5 + 3 );


    return 0; 
}
//geeksforgeeks.com 
