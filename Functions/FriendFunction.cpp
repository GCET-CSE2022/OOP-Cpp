#include<iostream>
using namespace std;

class beta; // DECLARE ONLY - FOR COMPILER

//CLASS ALPHA
class alpha
{
private:
    int data;
public:
    //CONSTRUCTOR FOR INITIALISATION
    alpha()
    {
        data= 3;
    }

    // DECLARE A FRIEND FUCNTION

    friend int FrFunction(alpha, beta); // DECLERATION ONLY

};

// CLASS BETA

class beta
{
private:
    int data;
public:
    //CONSTRUCTOR FOR INITIALISATION
    beta()
    {
        data= 5;
    }

    // DECLARE A FRIEND FUCNTION

    friend int FrFunction(alpha, beta); // DECLERATION ONLY

};

//FUNCTION DEFINITION
int FrFunction(alpha a, beta b)
{
    return (a.data*b.data);
}


int main()
{
   alpha aa;
   beta bb;
   cout<<FrFunction(aa,bb); // FUNCTION CALL TO DISPLAY DATA FROM TWO CLASSES
   return 0;
}

