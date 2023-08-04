#include<iostream>
using namespace std;
class complex{
    int a,b;
public:
/*creaating a constructor8; objects of class
It is automitaclly invoked whenever an object is created
*/
complex(void);//constructor declaration
void printnumber()
{
    cout<<"the sum is "<<a<<"+"<<b<<"i";
}
};
complex::complex(void){  //defaul constructor becoz it doesn't take parameteres

    a=10;
    b=8;
}
int main(){
    complex c;
    c.printnumber();
    return 0;
}
//properties of constructors
/* It should be declared in public section
They are automatically invoked when object is created
They cannot return values and do not have return types
It can have default arguments
we cannot refer to their address
*/
