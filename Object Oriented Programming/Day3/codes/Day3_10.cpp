#include<iostream> 

using namespace std; 

class Complex 
{
    int real; 
    int imag;
    public: 
    Complex( void )
    {
        this->real = 0;
        this->imag  = 0;
    } 
    Complex ( int real , int imag )
    {
        this->real = real; 
        this->imag = imag; 
    }
    void printRecord( )
    {
        cout<<"Real :   "<<this->real<<endl; 
        cout<<"Real :   "<<this->imag<<endl; 
    }
    //this = &c1
    //other = c2; 
    Complex operator+( Complex other)
    {
         Complex result; 
         result.real = this->real + other.real; 
         result.imag = this->imag + other.imag; 
         return result;     
    } 
    Complex operator-( Complex other)
    {
         Complex result; 
         result.real = this->real - other.real; 
         result.imag = this->imag - other.imag; 
         return result;     
    } 
}; 

int main( )
{
    Complex c1( 10 , 20);
    Complex c2( 20 , 30);
    Complex c3; 
    //c3 = c1 + c2;//c1.operator+(c2); 
    c3 = c1 - c2; //c1.operator-(c2);   
    c3.printRecord( ); 
    return 0; 
}