#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
    point(int a,int b){
        x=a;
        y=b;
    }
    void displaypoint(){
        cout<<"the point is ( "<<x<<","<<y<<endl;
    }
};
int main(){
    point p(1,1);
    p.displaypoint();

    point q = point (2,3);
    q.displaypoint();
    return 0;
}