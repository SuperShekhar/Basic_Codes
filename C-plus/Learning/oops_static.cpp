#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // making an static value of count
public:               // static variable means it is the property of class count is same for all object
                      // if not making static all the object have different count
                      // making static all function have shared the value
    void setdata(void)
    {
        cout << "Enter the id ";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of the employee is" << id << "and this is emplyee number" << count << endl;
    }

    static void getcount(void) // can have access of only static variable
    {
        cout << "the value of coung is" << count << endl;
    }
};
int Employee::count; // static variable have 0
int main()
{ // count=10 to start form 10
    Employee shekhar, hero, ram;

    shekhar.setdata();
    shekhar.getdata();
    Employee::getcount(); // static variable can be called without object
    hero.setdata();
    hero.getdata();
    Employee::getcount();
    ram.setdata();
    ram.getdata();
    Employee::getcount();

    return 0;
}