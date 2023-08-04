#include <iostream>
using namespace std;
class Complex
{
    int a, b;

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

    friend Complex sumComplex(Complex o1, Complex o2); // this is friend function this function can access all private data of class
};
// after making friend we can access function which is not in class
// it is not member just can access private data
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b)); // cannot acces value directly like cout>>a
    return o3;
}
int main()
{
    Complex c1, c2, sum;

    c1.setnumber(1, 4);
    c2.setnumber(5, 8);
    c1.printnumer();
    c2.printnumer();
    sum = sumComplex(c1, c2);
    sum.printnumer();
    return 0;
}