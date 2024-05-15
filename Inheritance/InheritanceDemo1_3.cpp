#include<iostream>

using namespace std;

class MyBaseClass
{
protected:
    int counter;

public:


   void operator ++ ()
    {
        cout<<endl<<"Counter Incremented using Operator Overloading in Base Class"<<endl;
        ++counter;
    }


    void DisplayData()
    {
        cout<<endl<<"Display Function  of Base Class Called. Data =   "<<counter<<endl;
    }

};

class MyDerivedClass: public rivate MyBaseClass
{
public:
    void operator -- ()
    {
        cout<<endl<<"Counter Decremented  Using Operator Overloading in Derived Class"<<endl;
        --counter;
    }
};


int main()
{
    MyDerivedClass Obj1;
    ++Obj1;
    ++Obj1;
   Obj1.DisplayData();
      --Obj1;
 Obj1.DisplayData();

 }
