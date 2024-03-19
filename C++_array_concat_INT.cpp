#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {10, 30, 40};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {20, 50, 60};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n1 + n2]; // Combined array

    // Copy elements from the first array
    for (int i = 0; i < n1; ++i)
        arr3[i] = arr1[i];

    // Copy elements from the second array
    for (int i = 0; i < n2; ++i)
        arr3[n1 + i] = arr2[i];

    // Display the concatenated array
    cout << "Concatenated Array: ";
    for (int i = 0; i < n1 + n2; ++i)
        cout << arr3[i] << " ";
    cout << endl;

    return 0;
}
