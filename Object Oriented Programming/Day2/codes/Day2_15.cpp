#include<iostream>

/*
    if i want to give meaningfull name to existing 
    datatype we should use typedef

    if i want to create a alias in C++ for existing 
    object we should use reference 
    reference is derived datatype in C++  

*/
using namespace std;
int main( )
{
    int num1 = 10; // num1 : referent  
    int &num2 = num1; // num2 : reference 
    int &num3 = num2; // num3 : reference 
    //int &num4; // NOT OK 

    //we cannot init reference to NULL 
    // we cannot create reference to reference  
    
    ++num1; 
    ++num2; 
    ++num3; 
    cout<<"num1 :   "<<num1<<"  "<<&num1<<endl;
    cout<<"num2 :   "<<num2<<"  "<<&num2<<endl;
    cout<<"num2 :   "<<num3<<"  "<<&num3<<endl;
    return 0; 
}

int main5( )
{
    int num1 = 10; // num1 : referent  
    int &num2 = num1; // num2 : reference 
    int &num3 = num1; // num3 : reference 
    ++num1; 
    ++num2; 
    ++num3; 
    cout<<"num1 :   "<<num1<<"  "<<&num1<<endl;
    cout<<"num2 :   "<<num2<<"  "<<&num2<<endl;
    cout<<"num2 :   "<<num3<<"  "<<&num3<<endl;
    return 0; 
}

int main4( )
{
    int num1 = 10; // num1 : referent  
    int &num2 = num1; // num2 : reference 
    ++num1; 
    ++num2; 
    cout<<"num1 :   "<<num1<<"  "<<&num1<<endl;
    cout<<"num2 :   "<<num2<<"  "<<&num2<<endl;
    return 0; 
}

int main3( )
{
    int num1 = 10; // num1 : referent  
    int &num2 = num1; // num2 : reference 
    /*
            int * const num2 = &num1;  
            int &num3 = 10; // NOT OK 
    */
    cout<<"num1 :   "<<num1<<"  "<<&num1<<endl;
    cout<<"num2 :   "<<num2<<"  "<<&num2<<endl;
    return 0; 
}

int main2( )
{
    int num1 = 10; // num1 : referent  
    int &num2 = num1; // num2 : reference 
    cout<<"num1 :   "<<num1<<"  "<<&num1<<endl;
    cout<<"num2 :   "<<num2<<"  "<<&num2<<endl;
    return 0; 
}

int main1( )
{
    int num1 = 10; 
    int num2 = num1; 
    cout<<"num1 :   "<<num1<<endl;
    cout<<"num2 :   "<<num2<<endl;
    return 0; 
}