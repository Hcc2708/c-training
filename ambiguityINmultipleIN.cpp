#include<iostream>
using namespace std;
class A
{
    public:
    void display(){
        cout<<"display from class A";

    }
};

class B
{
    public:
    void display(){
        cout<<"display from B";
    }
};
class C: public A, public B{
    public:
    void print()
    {
        A::display(); /// to remove ambiguity
    }
};

int main(){
    C c1;
    c1.print();
    ///c1.display(); ambiguous
}
