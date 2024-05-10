#include<iostream>
using namespace std;
inline void add(int p, int q)
	{
	    cout<<"Addition  =    " <<p+q;
	}

inline void sub(int p, int q)
	{
	    for (int i=0; i<100;i++)
        {
            p++;
        }

	    cout<<"Subtraction  =    " <<p-q;
	}


int main()
{
//   void add(int,int);
  // void sub(int,int);
   int x=5, y=3;
   add(x,y);
   sub(x,y);

   return 0;
}

