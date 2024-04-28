/*```

The provided C++ code demonstrates the use of constructors. Let's break it down:

1. You've defined a class called `myclass`.
2. The `myclass` has two private integer data members: `x` and `y`.
3. It contains two constructors:
   - The **default constructor** initializes `x` to 10 and `y` to 20.
   - The **copy constructor** takes an object of `myclass` as an argument and copies its values to the newly created object.
4. The `display()` method prints the values of `x` and `y`.

When you run this program, it will create two objects (`obj1` and `obj2`) of the `myclass` type. The default constructor will be called for `obj1`, and the copy constructor will be called for `obj2`, copying the values from `obj1`.

The output will show the values of `x` and `y` for both objects. In this case, it will display:

```
Default Constructor Called
x = 10    y = 20
Copy Constructor Called
x = 10    y = 20
```
*/
#include <iostream>
#include <conio.h>

class myclass
{
private:
    int x;
    int y;

public:
    myclass()
    {
        std::cout << "\n Default Constructor Called\n";
        x = 10;
        y = 20;
    }
    myclass(myclass &k)
    {
        std::cout << "\n Copy Constructor Called\n";
        x = k.x;
        y = k.y;
    }

    void display()
    {
        std::cout << "x = " << x << "    y = " << y;
    }
};

int main()
{
    clrscr();
    myclass obj1;
    obj1.display();

    myclass obj2(obj1);
    obj2.display();
}
