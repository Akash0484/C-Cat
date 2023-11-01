#include <iostream>

using namespace std;

class Complex
{
    int real;
    int imag;

public:
    // this = &c2;
    void accept_record()
    {
        cout << "Real :   ";
        cin >> this->real;

        cout << "Imag :   ";
        cin >> this->imag;
    }
    void print_record()
    {

        cout << "Real :   " << this->real << endl;
        cout << "Imag :   " << this->imag << endl;
    }
    //this = &c1 
    //other = c2; 
    Complex sum( Complex other )
    {
         Complex result; 
         result.real = this->real + other.real; 
         result.imag = this->imag + other.imag; 
         return result; 
    }
};

int main()
{
    Complex c1;
    c1.accept_record(); //c1.accept_record( &c1 );
    //c1 => 10 , 20 
    Complex c2;
    c2.accept_record(); //c2.accept_record( &c2 );
    //c2 => 30 , 40 

    Complex c3;
    c3 = c1.sum( c2  );   //c1.sum( &c1, c2  );   
    c3.print_record( ); //c3.print_record( &c3 ); 
}