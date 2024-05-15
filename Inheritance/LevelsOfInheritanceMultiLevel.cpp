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
class B:public A
{
public:
    void BFun()
    {
        cout<<endl<<"Function B Called of Class B"<<endl;
    }

};
//----------------------------------------------------------------------------------------------
class C : public B
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
    Obj.AFun();
    Obj.BFun();
 }
