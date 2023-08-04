#include <iostream>
using namespace std;
int main()
{
    int i;
    for (int i = 0; i < 4; i++)
    {
        cout << i << endl;
    }
    i = 5;
    while (i < 10)
    {
        cout << i << endl;
        i++;
    }
    i = 5;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 15);
    return 0;
}