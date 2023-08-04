#include <iostream>
using namespace std;
int a = 6; // global variable
int main()
// this is single line comment
/* this is multiplae line comment*/
{
    int a = 5; // local variable  //variable can be changes
    char b = 'b';
    int c;
    bool is_type = true;                                              // true returns 1 and false returns 0
    cout << "this is it " << a << " i know it works" << b << is_type; // << is called insertion operator
    cout << "\nenter the value of c\n";                               // it's like printf function
    cin >> c;                                                         // it's like scanf or input function >> it is called extraction operator
    cout << "the number enter by user is " << c << " and the sum is " << a + c;
    return 0;
}
