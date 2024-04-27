#include<iostream.h>
#include<conio.h>
//using namespace std;
class myclass
{
    private:
	int x;
	int y;
    public:
	myclass()
	{
	   cout<<"\n Default Constructor Called\n";
	   x=10;
	   y=20;
	}
	myclass(myclass &k)
	{
	   cout<<"\n Copy  Constructor Called\n";
	   x=k.x;
	   y=k.y;
	}


	void display()
	{
	    cout<<"x =    " <<x<<"    y =  "<<y;

	}
};


void main()
{
    clrscr();
    myclass obj1;
    obj1.display();

    myclass obj2(obj1);
    obj2.display();
}
