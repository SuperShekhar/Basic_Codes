#include <iostream>
using namespace std;

typedef struct employee // typedef gives a name like it gave name ep to struct employee
{                       // can't use functions in c
    int id;
    char fav; // struct is userdefined data type
    float salary;
} ep;

union money // in union we can only set 1
{
    int rice;
    char favdhar;
    float salary;
};

int main()
{
    enum Meal
    {
        breakfast,
        lunsh,
        dinenr
    };                         // meal is new data type
    cout << breakfast << endl; // give integer value to
    cout << lunsh << endl;
    Meal m1 = breakfast; // m1 s
    cout << m1 << endl;

    ep shekhar; // ep means typedef
    shekhar.id = 134;
    shekhar.fav = 'c';
    shekhar.salary = 10000;
    cout << shekhar.id << endl
         << shekhar.fav << endl
         << shekhar.salary;
    union money hello;
    hello.rice = 45;      // we have use rice so we can't use two others the new will override
    hello.salary = 56999; // now hello.rice is gone it will give garbage value
    return 0;
}