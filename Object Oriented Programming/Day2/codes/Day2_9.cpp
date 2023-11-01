#include<iostream> 

using namespace std; 

class Complex 
{
    private: 
        int real; 
        int imag; 
    public: 
    //  this = &c1 
    Complex(  void )
    {
          this->real = 0; 
          this->imag = 0;  
          cout<<"Complex(  void )"<<this<<endl;  
    } 
    void accept_record()
    {
        cout << "Real :   ";
        cin >> this->real;

        cout << "Imag :   ";
        cin >> this->imag;
    }
    //this = &c1 
    void printRecord( )
    {
        cout<<"Real :      "<<this->real<<endl; 
        cout<<"Imag :      "<<this->imag<<endl;  
    }
}; 

int main( )
{
    Complex c1;
    Complex c2;
    Complex c3;
     
    
    
    return 0; 
}