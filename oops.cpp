#include<iostream>
using namespace std;
class Student{
    int x; // instance variable
    string s; // instance variable
    static int num;
    double d;
    float float_value;
   /* Student(string name){
        cout<<"this is private constructor";
    }*/ // there is no use of private constructor.
    public:
    Student(string name){
        cout<<"this is public constructor\n";
        cout<<"default value of instance variable\n";
        cout<<"integer value: "<<x<<endl;
        cout<<"string value: "<<s<<endl;
        cout<<"num: "<<num<<endl;
        cout<<"float_value: "<<float_value<<endl;
        cout<<"double value: "<<d<<endl;

    }
    int rollNumber;
    string myName;

    int password;
};
int Student::num;
int main()
{

    // creating object statically
    Student s1("raj");

    s1.password = 3454;

    // creating object dynamically
    Student *s3 = new Student("raj");
    (*s3).myName = "test";
    cout<< "Student 3 name is " << (*s3).myName;
     // or
     s3->myName = "One";
     cout<< "Student 3 name is " << s3->myName;
}
