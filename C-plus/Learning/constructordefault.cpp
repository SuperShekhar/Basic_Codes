#include<iostream>
using namespace std;
class simple{
    int data1;
    int data2;
    public:
    simple(int a,int b=5)//default argument when argument absent in call
    {
     data1=a;
     data2=b;
    }
    void printdata();
};
void simple::printdata(){
    cout<<"the value of data1 and data2 is "<<data1<<data2;

}
int main(){
    simple s(1);
    s.printdata();
    return 0;
}