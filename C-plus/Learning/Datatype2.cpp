#include <iostream>
using namespace std;
int a = 5; // global variable
int main()
{
    int a = 4;
    int &y = a;           // making reference variable note it is not a copy its just that it have two names nickname
    long double b = 34.4; // note that in the 34.4 standard takes double
    float e = 34.4f;
    cout << "the value of a is " << a << endl; // printing local variable
    cout << "the value of a is " << ::a << endl;
    cout << sizeof(34.4) << endl;  //  standard datatype of 34.4 is double
    cout << sizeof(34.4f) << endl; // 34.4f it takes float as datatype
    cout << sizeof(34.4l);         // 34.4l takes long double as datatype
    // typecasting
    cout << "the value of e is " << int(e); // we can even use (int)e;
    return 0;
}