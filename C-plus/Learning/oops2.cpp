#include <iostream>
#include <string.h>
using namespace std;
/* class Employee{
    class defintion
    } harry,shekhar;  //it is valid syntax not recommended this is object defination
}*/

class binary
{             /* in class the passing by value logic won't applied becoz all the function takes actual argument than copy
so changing value inside the function of class will change the value from memory*/
    string s; // s can be accessed by every function because it is a member
    // by default classes are private
    //  so we can change the value to s through function of classes only
    void chk(void); // can't be called by user can be used inside other function that are inside public only
public:
    void read(void);
    void ones(void);
    void display(void);
};
void binary::ones(void)
{
    chk(); // since it is inside ones and we have defined that ones is inside class binary
           //  no need to do void binaryy::chk(void)
           // chk() is private function can be used through other function like this only
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout << "displaying " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

void binary::read(void)
{
    cout << "enter the binary number";
    cin >> s;
}

void binary::chk(void) // private function
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
int main()
{
    binary s;
    s.read();
    // s.chk(); it throws an error becoz it is private function can't access through function other than
    // that of the function inside same class
    s.display();
    s.ones();
    s.display();

    return 0;
}