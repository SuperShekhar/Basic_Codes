#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;
        cout << "enter the id of the employee" << endl;
        cin >> id;
    }
    void getid(void)
    {

        cout << "the id of this employee is " << id << endl;
    }
};
int main()
{
    Employee harry, rohan, lovish;
    // harry.setid();
    // harry.getid();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    return 0;
}