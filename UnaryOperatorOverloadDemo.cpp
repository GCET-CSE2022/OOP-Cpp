#include<iostream>
#include<iomanip>
using namespace std;

class UnaryOperatorOverloadDemo
{
   private:
      int data;
   public:

       //CONSTRUCTOR
       UnaryOperatorOverloadDemo(): data(0){}

//OVELOADED ++ OPERATOR
       void operator ++()
       {
          ++data;
       }
       //OVELOADED ++ OPERATOR
       void operator ++(int)
       {
          data = data++;
       }


       void Display() {
           cout<<"The Count is: "<<data;
       }
};



int main()
{
    UnaryOperatorOverloadDemo Obj; //, O;

     Obj++;  // calling of a function "void operator ++()"
++Obj;
Obj.Display();
    return 0;
}
