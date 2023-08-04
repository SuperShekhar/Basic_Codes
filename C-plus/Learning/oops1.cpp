#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c; // since a,b,c is private can be accessed through only function inside class
public:
    int d, e;                          // d and e is public
    void setdata(int a, int b, int c); // Declaration
    void getdata()
    {
        cout << "the value of a is" << a << endl;
        cout << "the value of b is" << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d id " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};
void Employee::setdata(int a1, int b1, int c1) // saying that the function is of inside the employee class
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee shekhar;
    // shekhar.a=6; throws an error since a is in private
    shekhar.d = 4;
    shekhar.e = 5; // d and e is public
    shekhar.setdata(1, 2, 4);
    shekhar.getdata();
    return 0;
}