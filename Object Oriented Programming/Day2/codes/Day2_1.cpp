#include<iostream> 

using namespace std; 
class Complex
{
    private: 
        int real; 
        int imag;
    public: 
    //classname *const this; 
    //this = &c1  
    void accept_record(  )
    {
           cout<<"Real  :   "; 
           cin>>this->real; 
           //cin>>real; 
           cout<<"Imag  :   "; 
           cin>>this->imag;  
           //cin>>imag;    
    }
    //this = &c1 
    void print_record()
    {
            //cout<<"Real :   "<<real<<endl; 
            cout<<"Real :   "<<this->real<<endl; 
            cout<<"Imag :   "<<this->imag<<endl; 
            //cout<<"Imag :   "<<imag<<endl; 

    }      

}; 



int main( )
{
    Complex c1;  
    c1.accept_record();//c1.accept_record( &c1 ); 
    c1.print_record();// c1.print_record( &c1 ); 
    return 0; 
}

/*
        int * const ptr; // constant pointer 
*/
  