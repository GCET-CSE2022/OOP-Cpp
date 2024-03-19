// prime numbers between 1 to 100

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int N = 100;
    for (int i = 2; i <= N; ++i)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}