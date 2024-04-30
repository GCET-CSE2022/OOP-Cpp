/*
Destructor destroys objects that the Constructor has created within a C++ program.
The name of the destructor is the same as the name of the class, except that it has a tilde (~) before its name.
It is a good practice to declare the destructor after the Constructor has finished using it.

When you run this program, you should see output similar to:
Constructor Called
Constructor Called
The Size of Obj 2 is: 8
Destructor Called
Destructor Called

This demonstrates how the order of constructor and destructor calls corresponds to the creation and destruction of objects in C++.
The constructors are called when objects are created, and the destructors are called when objects go out of scope or are explicitly destroyed.
*/

#include <iostream>
//#include <conio.h> // conio.h is not available in Visual Studio Code
using namespace std;

class myclass {
private:
    int x, y;

public:
    // Constructor: Initializes an object of the class.
    myclass() {
        cout << endl << "Constructor Called";
    }

    // Destructor: Cleans up resources used by an object of the class.
    ~myclass() {
        cout << endl << "Destructor Called";
    }
};

int main() {
    myclass obj1; // Creating an object of class myclass

    {
        myclass obj2; // Creating another object of class myclass
        cout << endl << "The Size of Obj 2 is :  " << sizeof(obj2); // Displaying the size of obj2
    }

    // cout << endl << "The Size of Obj12 is :  " << sizeof(obj1); // Uncomment if needed
    return 0;
}
