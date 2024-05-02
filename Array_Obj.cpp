/*
1. **Header inclusion**: 
   ```cpp
   #include<iostream>
   ```
   This line includes the Input/Output Stream Library which provides basic input and output services for C++ programs.

2. **Namespace declaration**:
   ```cpp
   using namespace std;
   ```
   This line declares that elements of the `std` namespace are to be used in the code without explicitly qualifying them.

3. **Class Definition**:
   ```cpp
   class ArrayObj {
       int a, b; // Private member variables a and b
   public:
       void display() {
           cout << "\n HELLO ";
       }
   };
   ```
   Here, a class named `ArrayObj` is defined, which has two private member variables `a` and `b`. It also has a public method `display()` which prints "HELLO" followed by a newline character.

4. **Main Function**:
   ```cpp
   int main() {
       ArrayObj obj[5]; // Array of 5 ArrayObj objects
       int i;
       for(i = 0; i < 5; i++)
           obj[i].display();
       return 0;
   }
   ```
   The `main()` function is the entry point of the program. Here, an array named `obj` of 5 `ArrayObj` objects is declared. Then, in a loop, the `display()` method of each object in the array is called.

5. **Output**:
   ```
   HELLO
   HELLO
   HELLO
   HELLO
   HELLO
   ```
   Since the `display()` method is called for each object in the array, "HELLO" is printed 5 times, each followed by a newline character.

This program simply creates an array of objects of the class `ArrayObj` and calls the `display()` method for each object.
*/
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
