#include<iostream>

using namespace std;

class MyBaseClass
{
protected:
    int counter;

public:

    MyBaseClass():counter(0)
    {
         cout<<endl<<"Zero Argument Constructor  Called"<<endl;
    };

   void operator ++ ()
    {
        cout<<endl<<"Counter Incremented using Operator Overloading"<<endl;
        ++counter;
    }


    void DisplayData()
    {
        cout<<endl<<"Display Function  Called. Data =   "<<counter<<endl;
    }

};


int main()
{
    MyBaseClass Obj1;
    ++Obj1;
    ++Obj1;
   Obj1.DisplayData();
 }
