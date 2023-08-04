#include <iostream>
#include <iomanip> //header file esp for manipulateor bsetw
using namespace std;
int main()
{
    int d = 3, b = 6, c = 5;
    const int a = 3;                            // now value of a cannot be changed
    cout << "The value of a was:" << a << endl; // endl is called manipulator
    // a=45; //throws and error cannot be changed
    cout << "the value of d is :" << setw(4) << d << endl; // gives 4 space

    return 0;
}