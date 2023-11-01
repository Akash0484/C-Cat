#include<iostream> 

using namespace std; 
void swap_by_ref( int &num1 , int &num2); 
int main( )
{
    int num1 = 10; 
    int num2 = 20; 

    cout <<"num1    :   "<<num1<<endl;
    cout <<"num2    :   "<<num2<<endl;

    swap_by_ref( num1 , num2);  
    cout <<"num1    :   "<<num1<<endl;
    cout <<"num2    :   "<<num2<<endl;

    return 0; 
}
void swap_by_ref( int &num1 , int &num2)
{
        int temp; 
        temp = num1; 
        num1 = num2; 
        num2 = temp; 
}

