#include<iostream>
#include<conio.h>
using namespace std;

class myclass
{
private:
    int x;

public:
	void fun1()
	{
	//    x=y=0;  //zero arg const
	    cout<<endl<<"FUN1 CALLED"; //Value of x = " << x;
	}

	void fun1(int p)
	{
	    x=p;
	    cout<<endl<<"FUN2 CALLED"; //Value of x = " << x;
	}

};


int main()
{
    myclass obj1; //,obj2(12, 3);
    obj1.fun1();
    obj1.fun1(3);

}
