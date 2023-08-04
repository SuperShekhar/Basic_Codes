#include <iostream>
using namespace std;

int sum(int a, int b, int c)
{
    return a + b + c;
}

int sum(int a, int b)
{
    return a + b;
}
int volume(double r, int h)
{
    return (3.14 * r * r * h); // volume of cylinder
}
int volume(int a)
{
    return (a * a * a); // cube
}
int volume(int l, int b, int h)
{
    return (l * b * h); // cuboid
}
int main()
{
    cout << sum(5, 6) << endl; // c++ identify the function using argument even if i have same name

    cout << sum(5, 6, 7) << endl;
    cout << "the volume of cylinder is " << volume(5, 6, 7) << endl; // use the function according to the argument

    cout << "the volume of cylinder is " << volume(5, 6) << endl;
    cout << "the volume of cylinder is " << volume(5) << endl;
    return 0;
}