#include<iostream> 
using namespace std; 
void accept_record(string message ,int &number )
{
    cout<<message; 
    cin>>number;   
}
int main( )
{

   cout<<"Open the connection"<<endl; 
   int num1; 
   accept_record("Num1  :   ",num1 ); 
   int num2;  
   accept_record("Num2  :   ",num2 ); 

   try
   {
       if(num2 == 0)
       {
           //throw 100; 
           //throw 2.4f;
             throw 1.2;  
       }
       else 
       {
           int res; 
           res = num1 / num2; 
           cout<<"Result    :   "<<res<<endl; 
       }
   }
   catch( int x  )
   {
       cout<<"int : Exception occured"<<endl; 
   }
   catch( float f  )
   {
       cout<<"float : Exception occured"<<endl; 
   }
   catch(...) // generic catch block / default
   {
       cout<<"Generic catch block "<<endl; 
   }
   
   

   cout<<"Close the connection"<<endl;   
   return 0; 
}