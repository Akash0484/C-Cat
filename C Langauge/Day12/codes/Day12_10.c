#include<stdio.h>
#include<string.h> 
//Global declaration 
//Declaration 
struct emp
{
    int empno; // 4
    char name[20]; //20
    double salary; // 8 
}; 
int main( )
{
    //int x[5] = {1,2,3,4,5}; // 5 
    struct emp arr[3] = { 
            {1,"Ketan",1000.00}, //[0]
            {2,"Aditya",2000.00},//[1]
            {3,"Rahul",3000.00}
    }; 
    int i; 
    for(i = 0 ; i < 3 ; i++)
        printf("%d %s %.2lf\n",arr[i].empno,arr[i].name,arr[i].salary);   
    return 0;  
}