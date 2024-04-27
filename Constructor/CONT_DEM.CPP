#include<iostream.h>
#include<conio.h>
class demo
{
       int x;

    public:
       demo()
       {
	  cout<<"\n Default Arg const. Called";
	  x=0;

       }


       demo(int y)
       {
	  cout<<"\n Parametrised  const. Called";
	  x=y;


       }

       void disp()
       {

	cout<<"\n x = " <<x;
       }

};
void main()
{

    clrscr();
    demo obj1;
    obj1.disp();

    demo obj2(10);
    obj2.disp();

}