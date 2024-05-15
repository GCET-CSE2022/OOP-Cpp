#include<iostream>
using namespace std;

class MyBaseClass
{
protected:
    int data;

public:

    MyBaseClass():data(0)
    {
         cout<<endl<<"Zero Argument Constructor of Base Class Called"<<endl;
    };

    MyBaseClass(int x):data(x)
    {
     cout<<endl<<"One Argument Ctor of Base Class Called"<<endl;
    };


};

class MyDerivedClass: private MyBaseClass
{

public:
    MyDerivedClass() : MyBaseClass() {}; // Calling base Class Zero Arg Ctor

    MyDerivedClass(int T) : MyBaseClass(T) {}; // Calling base Class One Arg Ctor

void DisplayData()
    {
       cout<<endl<<"HELLO Display  "<<endl;
      // MyBaseClass::DisplayData();

    }
};

int main()
{
   MyDerivedClass Obj1,Obj2(5);
   Obj1.DisplayData();
   Obj2.DisplayData();
}
