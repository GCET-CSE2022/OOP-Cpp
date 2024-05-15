#include<iostream>
using namespace std;

class MyBaseClass
{
protected:
    int counter;
public:

    MyBaseClass():counter(0)
    {
         cout<<endl<<"Zero Argument Constructor of Base Class Called"<<endl;
    };

    MyClass(int x)
    {
     counter = x;
     cout<<endl<<"One Argument Constructor Called"<<endl;
    }

    MyBaseClass operator ++ ()
    {
        cout<<endl<<"Data Incremented in Base Class using Operator Overloading"<<endl;
        ++counter;

    }
    void DisplayData()
    {
        cout<<endl<<"Display Function of Base Class Called. Data =   "<<counter<<endl;
    }

};

class MyDerivedClass: public MyBaseClass
{

public:
    MyBaseClass operator -- ()
    {
        cout<<endl<<"Data Decremented in Base Class using Operator Overloading"<<endl;
        --counter;

    }

};

int main()
{
    MyDerivedClass Obj;
    ++Obj;
    ++Obj;
    --Obj;
    Obj.DisplayData();
}
