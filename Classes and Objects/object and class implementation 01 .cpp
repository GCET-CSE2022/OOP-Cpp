#include <iostream>
using namespace std;

class Student
{
private:
    int x;

public:
    void getData()
    { cout<<"Enter a number\t";
        cin >> x;
    }

    void display()
    {   cout<<"you entered\t";
        cout << x;
    }
};

int main()
{
    Student s;
    s.getData();
    s.display();
    return 0;
}
