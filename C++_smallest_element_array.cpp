#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the total number of elements: ";
    cin >> size;

    int arr[25];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Finding the smallest element
    int smallest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "Smallest element in the array: " << smallest << endl;

    return 0;
}
