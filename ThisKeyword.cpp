// copy constructor
#include<iostream>
using namespace std;
 class Employee{
    public:
    int id;
    string name;
    Employee(int id, string name){
        this->id = id;
        this->name = name;
    }
    void display()
    {
        cout<<id<<" "<<name;
    }
 };
 int main(){
    Employee s1(23, "raj");
    s1.display();
 }
