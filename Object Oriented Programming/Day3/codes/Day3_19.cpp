#include<iostream> 

using namespace std; 

class
{
    public: 
    void showRecord( void  )
    {
        cout<<"void showRecord( void  )"<<endl;
    }
    static void printRecord( void  )
    {
        cout<<"static void printRecord( void  )"<<endl;
    }
    
}t1;

int main( )
{
    t1.showRecord( ); 
    t1.printRecord( ); 
    return 0; 
}