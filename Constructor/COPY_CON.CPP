#include <iostream>
using namespace std;

class myclass {
private:
    int x;
    int y;

public:
    /**
     * Default constructor.
     * Initializes x to 10 and y to 20.
     */
    myclass() {
        cout << "\n Default Constructor Called\n";
        x = 10;
        y = 20;
    }

    /**
     * Copy constructor.
     * Initializes x and y with the values of another myclass object.
     * 
     * Reference to another myclass object.
     */
    myclass(myclass &k) {
        cout << "\n Copy Constructor Called\n";
        x = k.x;
        y = k.y;
    }

    /**
     * Display the values of x and y.
     */
    void display() {
        cout << "x = " << x << "    y = " << y;
    }
};

int main() {
    myclass obj1;
    obj1.display();

    myclass obj2(obj1);
    obj2.display();

    return 0;
}
