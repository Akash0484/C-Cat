#include<iostream> 
#include<string> 
#include<typeinfo> 

using namespace std;  
int main( void  )
{
      float number; 
      const type_info &type = typeid(number); 
      string strType = type.name( ); 
      cout<<"Type   :   "<<strType<<endl;   
}
