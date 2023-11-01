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
          cout<<"Complex(  void )"<<endl;  
    } 
    Complex( int real , int imag )
    {
        cout<<"Complex( int real , int imag )"<<endl;
        this->real = real; 
        this->imag = imag;  

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
 //on c1 object paramterless ctor will get called 
    c1.printRecord( ); // 0 0 
    Complex c2(10,20);    
 //on c1 object paramterized ctor will get called    
    c2.printRecord( ); // 10 20  
    
    
    return 0; 
}