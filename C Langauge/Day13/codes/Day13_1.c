#include<stdio.h> 

struct emp
{
    int empno; 
    char name[20]; 
    double sal; 
}; 
void accept_emp( struct emp a[]); 
void print_emp(struct emp a[]); 
int main( )
{
    struct emp arr[3];
    accept_emp(arr);  
    print_emp(arr); 
    return 0; 
}
void print_emp(struct emp a[])
{
    int i; 
    for(i = 0; i<3 ; i++)
        printf("%d %s %.2lf",a[i].empno,a[i].name,a[i].sal); 
}
void accept_emp( struct emp a[])
{
    int i; 
    for( i = 0 ; i < 3 ; i++)
    {
        printf("Enter empid name and salary"); 
        scanf("%d%s%lf",&a[i].empno,a[i].name,&a[i].sal); 
    }
}