#include <iostream>
using namespace std;
int main() {
    int n; // Declare an integer variable to store user input
    cout << "Enter the number: ";
    cin >> n;
    // Check if the number is even
    if (n % 2 == 0) {
        // If even, print message
        cout << "The number " << n << " is even";
    } else {
        // If odd, print message
        cout << "The number " << n << " is odd";
    }
    return 0;
}
