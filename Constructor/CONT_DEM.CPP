#include <iostream>
using namespace std;

class demo {
    int x;

public:
    /**
     * @brief Default constructor.
     * Initializes x to 0.
     */
    demo() {
        cout << "\n Default constructor called";
        x = 0;
    }

    /**
     * @brief Parameterized constructor.
     * Initializes x with the provided value.
     * 
     * @param y Value to initialize x.
     */
    demo(int y) {
        cout << "\n Parameterized constructor called";
        x = y;
    }

    /**
     * @brief Display the value of x.
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
