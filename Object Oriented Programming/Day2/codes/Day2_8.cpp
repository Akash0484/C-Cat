#include<iostream> 

using namespace std; 

class Complex 
{
    private: 
        int real; 
        int imag; 
    public: 
    //  this = &c1 
    void initComplex( )
    {
          this->real = 0; 
          this->imag = 0;   
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
    c1.initComplex( ); //c1.initComplex( &c1 ); 
    c1.printRecord( ); //c1.printRecord( &c1  ); ==> 0 0 
    c1.accept_record( ); // c1.accept_record( &c1 ); ==> 10 20 
    c1.printRecord( );// c1.printRecord( &c1  );  ==> 10 20  
    c1.initComplex( ); // c1.initComplex( &c1 );  ==> 0 0 
    c1.printRecord( ); // 0 0 
    return 0; 
}