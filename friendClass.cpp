#include<iostream>
using namespace std;
class A
{
    int privateInt;
    public:
    A(){
        privateInt = 10;
    }
    friend class B;
};
class B
{
    public:
    void display(A &ref1){
        cout<<ref1.privateInt;
    }
};
int main()
{

    A d;
    B c;
    c.display(d);
}
