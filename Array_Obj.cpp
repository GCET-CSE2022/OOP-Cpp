#include<iostream>
using namespace std;

// Class definition for ArrayObj
class ArrayObj {
    int a, b; // Private member variables a and b
    
public:
    // Method to display a message
    void display() {
        cout << "\n HELLO ";
    }
};

// Main function
int main() {
    ArrayObj obj[5]; // Array of 5 ArrayObj objects
    int i;
    
    // Loop through each object in the array and call the display method
    for(i = 0; i < 5; i++)
        obj[i].display();
    
    return 0;
}
