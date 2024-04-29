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
