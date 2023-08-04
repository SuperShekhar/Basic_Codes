#include <iostream>
using namespace std;

class num
{
private:
    int a = 5;

public:
    void change()
    {
        a = 7;
    }
};

int main()
{

    num shekhar;
    shekhar.change();

    return 0;
}