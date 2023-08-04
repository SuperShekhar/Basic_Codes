#include <iostream>
using namespace std;

int sum(int a, int b) // formal parameters
{                     // they are just copies of actual
    int c = a + b;
    return c;
}

int main()
{
    int num1, num2; // actual parameters
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;

    cout << "the sum is" << sum(num1, num2);
    return 0;
}