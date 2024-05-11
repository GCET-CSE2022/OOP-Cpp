#include <iostream>
using namespace std;

int main()
{
    int size, temp;
    int arr[25];

    cout << "Enter the total number of elements: ";
    cin >> size;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Finding the largest element
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest element in the array: " << largest << endl;

    return 0;
}
