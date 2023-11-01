#include<stdio.h> 

//Stringizing operator (#)

#define PRINT(x) puts(#x)  
#define PRINT_VAR(var) printf(#var " = %d",var)

//Token pasting operator (##)

#define PRINT_SAL(a,b) printf("sal = %d\n",a##b)

int main( )
{
    int adventure = 50; 
    int basicsalary = 100; 
    //printf("Hello world");
    //PRINT(Hello world); 
    //puts("Hello world")   

    //PRINT_VAR(adventure); 
    //printf("adventure" " = %d",adventure); 
    
     PRINT_SAL(basic,salary);  
     //printf("sal = %d\n",basicsalary)
    
    
    return 0; 
}