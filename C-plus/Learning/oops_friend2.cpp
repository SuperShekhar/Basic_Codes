#include <iostream>
using namespace std;
class Complex; // forward declaration
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumcomplex(Complex, Complex); // declaration
};
class Complex
{
    int a, b;
    friend int calculator::sumcomplex(Complex o1, Complex o2); // making friend class inside other class
    // friend class calculator ; makes full class friend
public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumer(void)
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
int calculator::sumcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int main()
{
    Complex o1, o2;
    o1.setnumber(1, 5);
    o2.setnumber(5, 7);
    calculator c;
    int res = c.sumcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;

    return 0;
}