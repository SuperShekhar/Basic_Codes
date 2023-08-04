#include<iostream>
using namespace std;
class complex{
    int a,b;
public:

complex(int,int);//constructor declaration
void printnumber()
{
    cout<<"the sum is "<<a<<"+"<<b<<"i"<<endl;
}

};
complex ::complex(int x,int y){  //parametrized constructor becoz it takes parameteres

    a=x;
    b=y;
}

int main(){
    complex a(4,6);//implicit call
    a.printnumber();
    complex b=complex(5,7);//explicit call
    b.printnumber();
    return 0;
}