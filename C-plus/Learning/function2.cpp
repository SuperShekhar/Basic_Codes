#include <iostream>
using namespace std;

int money(int cur, int fact = 1.08) // we can give only one argument fact is default arguments
                                    //  to overwrite we can give value in function call
{                                   // default arguments always last;
    return cur * fact;
}

inline int product(int a, int b)
{                 // inline function save time when you want to repeat function more time
    return a * b; // don't use in static or many lines code
} // in inline it doesn't store in memory address

int strlen(const char *p) // can't change the value of p becoz it is const
{
}
int add(int a, int b)
{
    static int c = 0; // while calling function many times will initialize only ones then it retain value
    c = c + 1;
    return a * b + c;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "the product a and b is" << product(a, b) << endl;
    int e, f;
    cin >> e >> f;
    cout << "the product a and b is" << product(e, f);
    cout << "the result is " << add(a, b) << endl;
    cout << "the result is " << add(a, b) << endl; // different value than below and abouve
    cout << "the result is " << add(a, b) << endl;
    cout << "the total money is " << money(1235);       // use default argument for fact
    cout << "the total money is " << money(1235, 1.10); // don't use default value for fact use given valuewha

    return 0;
}