#include<iostream> 

using namespace std; 

class Test 
{
    private: 
     int num1; //Instance variable 
     int num2; //Instance variable 
     static int num3; //class level variable 
    public: 
    void setNum1(int num1)
    {
         this->num1 = num1;   
    }
    void setNum2(int num2)
    {
         this->num2 = num2;   
    }
    static void setNum3(  int num3  )
    {       
            
            
            Test::num3 = num3; 
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
    Test t1; 
    t1.setNum1( 10 ); 
    t1.setNum2( 20 ); 
    Test::setNum3( 30  );
    t1.printRecord( );  
    return 0; 
}