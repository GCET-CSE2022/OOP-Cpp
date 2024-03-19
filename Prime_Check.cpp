#include <iostream>
using namespace ::std;
int main()
{
    int n, i = 1, sum = 0;
    cout <<"Enter the number: ";
    cin>>n;
    for (; i <= n; i++)
        if (n % i == 0)
        {
            (sum += 1);
        }
    if (sum == 2)
    {
        cout <<"The Given Number Is Prime";
    }
    else
    {
        cout <<"The Given Number Is Not Prime";
    }
}