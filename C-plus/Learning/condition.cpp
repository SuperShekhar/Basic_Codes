#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "you cannot come to my party" << endl;
    }
    else if (age == 18)
    {
        cout << "you can get kid pass" << endl;
    }

    else
    {
        cout << "you can come to the party" << endl;
    }
    return 0;
}