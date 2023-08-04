#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
int fact(int n)
{
    if (n <= 1)
    {
        return n = 1;
    }

    return n * fact(n - 1);
}
int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    cout << "the factorial is " << fact(n);
    cout << "the fibonaci of series " << fib(n);
    return 0;
}