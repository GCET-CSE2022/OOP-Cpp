// even numbers from 1 to 100
#include <iostream>
using namespace std;

int main()
{
    cout << "Even numbers between 1 and 100:" << endl;
    for (int i = 2; i <= 100; i += 2)
    {
        cout << i << " ";
    }
    return 0;
}

// odd numbers from 1 to 100
#include <iostream>
using namespace std;

int main()
{
    cout << "Odd numbers between 1 and 100:" << endl;
    for (int i = 1; i <= 100; i += 2)
    {
        cout << i << " ";
    }
    return 0;
}
