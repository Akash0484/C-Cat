#include<iostream> 

using namespace std;  
class Test 
{
    private: 
    const int num1; 

    public: 
    Test( void ) : num1(10){

    }
    // {
    //     this->num1 = 10; 
    // }
    void printRecord(  void  )
    {
        //++this->num1; // NOT OK  
        cout<<"num1 :   "<<this->num1; 
    }
}; 
int main( )
{
    Test t1; 
    t1.printRecord( ); 
    return 0; 
}