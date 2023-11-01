#include<stdio.h> 

int main( )
{
    int number; // variable declaration 
    int roll = 300; //variable declaration  + init 
    /*
            double basic_salary = 1000.00; 
            double total_salary = 2000.00; 
    */
    double basic_salary = 1000.00,total_salary = 2000.00; 
//we can declare multiple variables in single line 

    // char ch = 'A'; // variable declaration  + init 

    // printf("Variables and datatypes\n");
    // number = 30; // assignment  
    // printf("number = %d\n",number); 
    // //      number = 30
    // roll = 70; // assignment 
    // printf("roll = %d\n",roll); // 70 
    // //      roll = 70
    // number = 40; // assignment 
    // printf("number = %d\n",number); 
    // //      number = 40
    // printf("%.2lf , %.2lf\n",basic_salary,total_salary); 
    
    // printf("%d %d \n %.2lf %.2lf",roll,number,basic_salary,total_salary); 
    
    // printf("\n %c",ch); 
    
    //int num1 = 10; 
    // Width specifier 
    //printf("          %d",num1);
    //printf("%10d",num1);// right justified  
    //                 1 0 
    // - - - - - - - - - -  
    //printf("%-10d",num1);// left justified 
    // 1 0 
    // - - - - - - - - - - 

    //printf("%010d",num1);// right justified   
    // 0 0 0 0 0 0 0 0 1 0 
    // - - - - - - - - - - 
    // float , double 
    // double => %lf , float => %f 
    float fvar = 12.33;

    //printf("%10.2f",fvar);// right justified 
    //           1 2 . 3 3
    // - - - - - - - - - - 

    //printf("%-10.2f",fvar);// right justified 
    //  1 2 . 3 3 
    //  - - - - - - - - - - 

    //printf("%010.2f",fvar);// right justified 
    //           1 2 . 3 3
    // - - - - - - - - - - 

    //printf("%.2f",fvar);   

      printf("%.f",fvar);   
    return 0; 
}
/*
        100 
        %8d 
        %-8d
                  1 0 0 
        - - - - - - - - 
        1 0 0 
        - - - - - - - - 

*/