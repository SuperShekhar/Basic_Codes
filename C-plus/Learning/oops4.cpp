#include <iostream>
using namespace std;
class complex
{
  int a;
  int b;

public:
  void setdata(int v1, int v2)
  {
    a = v1;
    b = v2;
  }
  void setdatasum(complex o1, complex o2) // it takes first object and seconde object of the function as argument
  {
    a = o1.a + o2.a; // changes the value of a to sum of two objects
    b = o1.b + o2.b;
  }
  void printdata(void)
  {
    cout << "your complex number is " << a << "+" << b << "i" << endl;
  }
};
int main()
{
  complex c1, c2, c3;
  c1.setdata(1, 2);
  c1.printdata();
  c2.setdata(3, 4);
  c2.printdata();
  c3.setdatasum(c1, c2);
  c3.printdata();
  return 0;
  return 0;
}