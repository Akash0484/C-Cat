#include<iostream> 

using namespace std; 

class Complex
{
    private: 
      int real; 
      int imag; 
    public: 
      Complex( void  )
      {
          cout<<"Complex( )"<<endl ;
          this->real = 0; 
          this->imag = 0;   
      }
      Complex(  int real , int imag )
      {
          cout<<"Complex(  int real , int imag )"<<endl; 
          this->real = real; 
          this->imag = imag;     
      } 
      //this = c2; 
      //&rhs = c1;     
      Complex( const Complex &rhs )
      {     
            cout<<"Complex( const Complex &rhs )"<<endl;
            this->real = rhs.real; 
            this->imag = rhs.imag;  
      }  
      //this = &c2 
      void printRecord( void  )
      {
          cout<<"Real   :   "<<this->real<<endl;
          cout<<"Imag   :   "<<this->imag<<endl; 
      }
};

int main( )
{
    Complex c1(10,20);
    Complex c2; 
    c2 = c1; // c2.operator=(c1);  
    c2.printRecord( ); 
    
    return 0; 
}
// int a = 1; 
// int b = 2; 
//  a = b;  