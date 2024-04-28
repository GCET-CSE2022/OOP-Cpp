#include <iostream>
using namespace std;

class demo {
    int x;

public:
    /**
     *  Default constructor.
     * Initializes x to 0.
     */
    demo() {
        cout << "\n Default constructor called";
        x = 0;
    }

    /**
     *  Parameterized constructor.
     * Initializes x with the provided value.
     * 
     * y Value to initialize x.
     */
    demo(int y) {
        cout << "\n Parameterized constructor called";
        x = y;
    }

    /**
     *  Display the value of x.
     */
    void disp() {
        cout << "\n x = " << x;
    }
};

int main() {
    // Creating an object using the default constructor
    demo obj1;
    obj1.disp();

    // Creating an object using the parameterized constructor
    demo obj2(10);
    obj2.disp();

    return 0;
}
