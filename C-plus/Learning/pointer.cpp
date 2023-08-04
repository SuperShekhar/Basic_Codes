#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *b = &a;                                        // address of a is stored at b
    cout << "the address of a is " << b << endl;        // the address of a is stored in b
    cout << "the value at address b is " << *b << endl; // the value at address b
    // & means address of operator
    // * is dereference operator (value at)
    int **c = &b;        // c hold the address of pointer b
    cout << c << endl;   // address of b
    cout << *c << endl;  // it is equivalent to b
    cout << **c << endl; // it is the value at address c
    return 0;
}