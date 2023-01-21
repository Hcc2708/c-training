#include<iostream>
using namespace std;
class Student{
    int age;
    string gender;
    string name;
    public:
    Student(int age, string gender, string name)
    {
        this->age = age;
        this->gender  = gender;
        this->name = name;
    }
    void displayInfo()
    {
        cout<<"age : "<< age<<endl;
        cout<<"gender : " << gender<<endl;
        cout<<"name : " << name;
    }
};
int main()
{
    string name = "Hemchand";
    string gender = "Male";
    Student obj(22 ,gender, name);
    obj.displayInfo();
}