#include<iostream>
using namespace std;
class A{
private:
    int num1;
public:
    A( void ){
        this->num1 = 10;
    }
    A( int num1 ){
        this->num1 = num1;
    }
    void printRecord( void ){
        this->showRecord( );
    }
protected:
    void showRecord( void ){
        cout<<"Num1 :   "<<this->num1<<endl;
    }
};
class B : virtual public A{
private:
    int num2;
public:
    B( void ){
        this->num2 = 20;
    }
    B( int num2 ){
        this->num2 = num2;
    }
    B( int num1, int num2 ) : A( num1 ){
        this->num2 = num2;
    }
    void printRecord( void ){
        A::showRecord( );       //Num1
        this->showRecord( );    //Num2
    }
protected:
  void showRecord( void ){
        cout<<"Num2 :   "<<this->num2<<endl;
    }
};
class C : virtual public A{
private:
    int num3;
public:
    C( void ){
        this->num3 = 30;
    }
    C( int num3 ){
        this->num3 = num3;
    }
    C( int num1, int num3 ) : A( num1 ){
        this->num3 = num3;
    }
    void printRecord( void ){
        A::showRecord( );       //Num1
        this->showRecord( );    //Num3
    }
protected:
  void showRecord( void ){
        cout<<"Num3 :   "<<this->num3<<endl;
    }
};
class D  : public B, public C{
private:
    int num4;
public:
    D( void ){
        this->num4 = 40;
    }
    D( int num1, int num2, int num3, int num4 ) : A( num1 ), B( num2 ), C( num3 ){
        this->num4 = num4;
    }
    void printRecord( void ){
        A::showRecord( );       //Num1
        B::showRecord( );       //Num2
        C::showRecord( );       //Num3
        this->showRecord( );    //Num4
    }
protected:
    void showRecord( void ){
        cout<<"Num4 :   "<<this->num4<<endl;
    }
};
int main( void ){
    //D d1;
    //d1.printRecord( );

    
    D d2(50,60,70,80);
    d2.printRecord( );
    
    return 0;
}
