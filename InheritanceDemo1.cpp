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



class MyDerivedClass: public MyBaseClass
{

public:

    MyDerivedClass(): MyBaseClass()
    {
    }

    MyDerivedClass(int x): MyBaseClass(x)
    {
     };

    void DisplayData()
    {
        cout<<endl<<"Display Function of Derived Class Called:  "<<data<<endl;
    }

};

int main()
{

  MyDerivedClass Obj1;
    Obj1.DisplayData();
      MyDerivedClass Obj2(5);
    Obj2.DisplayData();

}
