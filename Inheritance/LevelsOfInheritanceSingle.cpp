#include<iostream>

using namespace std;

class A
{
public:
    void Fun()
    {
        cout<<endl<<"Inherited Function"<<endl;
    }

};

class B:public A
{

};


int main()
{
    B Obj;
    Obj.Fun();
 }
