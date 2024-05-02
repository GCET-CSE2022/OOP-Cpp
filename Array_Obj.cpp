#include<iostream>
using namespace std;
class ArrayObj
{
    int a, b;
    public:
       void display(){cout<<"\n HELLO ";}

};


int main()
{
     ArrayObj obj[5];
     int i;
     for(i=0;i<5;i++)
	obj[i].display();
return 0;

}
