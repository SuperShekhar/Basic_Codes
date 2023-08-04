#include <iostream>
using namespace std;
// you can change the value of an array
int main()
{
    int marks[4] = {23, 45, 56, 67};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "the value of marks " << marks[i] << endl;
    }
    // in arrays the address we cannot write &marks just marks is enough
    int *p = marks;           // stores the first value of array
    cout << p << endl;        // print address of first elements of array
    cout << *p << endl;       // value at address p or first element of array
    cout << *(p + 1) << endl; // value of second element of array
    cout << (p + 1) << endl;  // address of second element
    return 0;
}