#include<iostream>
using namespace std;

class A
{
public:
    void AFun()
    {
        cout<<endl<<"Function A Called of Class A"<<endl;
    }

};
//----------------------------------------------------------------------------------------------
class B
{
public:
    void BFun()
    {
        cout<<endl<<"Function B Called of Class B"<<endl;
    }


       void AFun()
    {
        cout<<endl<<"Function A Called of Class B"<<endl;
    }


};
//----------------------------------------------------------------------------------------------
class C : public A, public B
{
    public:
        C()
        {
            cout<<endl<<"Constructor Class C"<<endl;
        }

};
//----------------------------------------------------------------------------------------------
int main()
{
    C Obj;
    Obj.BFun();
    Obj.B::AFun();
    Obj.A::AFun();
 }
