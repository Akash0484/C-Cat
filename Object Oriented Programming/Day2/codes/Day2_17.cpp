#include<iostream> 
using namespace std;  
int main( )
{
    // new and delete => operator 
    int *ptr = new int[3] ; // OK  
    ptr[0] = 10; // *(ptr + 0 ) 
    ptr[1] = 20;
    ptr[2] = 30;  
    int index; 
    for(index = 0 ; index < 3 ; index++)
            cout << ptr[index]<<endl; 
    delete ptr; // To avoid memory leakage 
    ptr = NULL; // To avoid dangling pointer  
    return 0; 
}

int main1( )
{
    // new and delete => operator 
    int *ptr = new int ; // OK  
    *ptr = 300; 

    cout<<"value    :   "<<*ptr<<endl;// 300 

    delete ptr; // To avoid memory leakage 
    ptr = NULL; // To avoid dangling pointer  
    return 0; 
}
//if new fails it throws bad_alloc_exeception 

