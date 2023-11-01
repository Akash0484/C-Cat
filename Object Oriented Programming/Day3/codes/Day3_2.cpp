#include<iostream> 

using namespace std; 

#define SIZE 3 

class Array 
{
    private: 
     int arr[SIZE];
    //this = &a1   
    public:
     void accept_record( void  )
     {
         int index; 
         for(index = 0 ; index < SIZE ; index++)
         {
             cout<<"Enter the element"; 
             cin>>this->arr[index]; 
         } 
     }
     void printRecord( void  )
     {
         int index; 
         for(index = 0 ; index < SIZE ; index++) 
              cout<<this->arr[index]<<endl;   
     } 
}; 

int main( )
{
    Array a1; 
    a1.accept_record( ); // a1.accept_record( &a1 ); 
    a1.printRecord( ); 
    return 0; 
}
