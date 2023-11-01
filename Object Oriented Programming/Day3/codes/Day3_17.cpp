#include<iostream> 

using namespace std; 

class Test 
{
    private: 
     int num1; //Instance variable 
     int num2; //Instance variable 
     static int num3; //class level variable 
    public: 
    Test( void )
    {
        this->num1 = 10; 
        this->num2 = 20;
        
    }
    Test( int num1 , int num2 )
    {
        this->num1 = num1; 
        this->num2 = num2;
        
    } 
    void printRecord( ) // Instance method 
    {
        cout<<"num1 :   "<<this->num1<<endl;
        cout<<"num2 :   "<<this->num2<<endl;
        cout<<"num3 :   "<<Test::num3<<endl; 
    }
}; 
int Test :: num3 = 500; // Global defination 
int main( )
{
    Test t1(10,20);
    t1.printRecord( );
    Test t2(30,40); 
    t2.printRecord( ); 
    Test t3; 
    t3.printRecord( );
    return 0; 
}