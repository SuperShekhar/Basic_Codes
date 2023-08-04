#include <iostream>
using namespace std;

int swap(int a, int b)
{
    int temp = a; // a and b are just copy of main function
    a = b;
    b = temp;
}
int swappointer(int *a, int *b) // this is just declaration
{
    int temp = *a; //* a means value at a so which we have a is &a from main function
    *a = *b;
    *b = temp;
}

int swaprefeer(int &a, int &b) // this make a nickname of actual a i.e is main
{                              //@a is reference variabl changing it would change original
    int temp = a;
    a = b;
    b = temp;
}

int &swaprefeere(int &a, int &b) // so int& is making reference value so it can change the original value from memory
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 4, b = 5;
    swap(a, b);
    cout << "the value of a and b is" << a << " " << b;
    // this doesn't work
    swappointer(&a, &b); // this does work using pointer the address
    cout << "The value of a and b is" << a << " " << b;
    swaprefeer(a, b);       // this also does work using reference
    swaprefeere(a, b) = 78; // this changes the value of returned value
    cout << "The value of a and b is" << a << " " << b;
    return 0;
}