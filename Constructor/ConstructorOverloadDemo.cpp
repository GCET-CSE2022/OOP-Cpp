#include<iostream>
#include<conio.h>
using namespace std;
class myclass
{
    private:
	int x,y;

    public:
	myclass()
	{
	    x=y=0;  //zero arg const
	    cout<<endl<<"ZERO ARG CONSTRUCTOR"; //Value of x = " << x;
	}

	myclass(int k, int l)
	{
	   x=k;
	   y= l;
	   cout<<endl<<"TWO ARG CONSTRUCTOR";
	}



};


int main()
{
    myclass obj1,obj2(12, 3);

}
