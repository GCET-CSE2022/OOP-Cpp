#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    // Default constructor
    Distance() : feet(0), inches(0.0) {}

    // Member function to input data
    void GetData() {
        cout << "Enter Feet: ";
        cin >> feet;

        cout << "Enter inches: ";
        cin >> inches;
    }

    // Member function to display data
    void DisplayData() {
        cout << "Feet: " << feet << endl;
        cout << "Inches: " << inches << endl;
    }

    // Member function to add two distances
    Distance AddDistances(const Distance& DT1, const Distance& DT2) {
        Distance DTS;
        DTS.feet = feet + DT1.feet + DT2.feet;
        DTS.inches = inches + DT1.inches + DT2.inches;
        return DTS;
    }
};

int main() {
    Distance obj1, obj2, obj3, objSum;

    cout << "Enter details for distance 1:" << endl;
    obj1.GetData();

    cout << "Enter details for distance 2:" << endl;
    obj2.GetData();

    cout << "Enter details for distance 3:" << endl;
    obj3.GetData();

    objSum = obj1.AddDistances(obj2, obj3);

    cout << "Sum of distances:" << endl;
    objSum.DisplayData();

    return 0;
}
