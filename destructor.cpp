#include<iostream>
using namespace std;
class ForDestructor{
    int g;
    public:
    static int abc;
    int abcd = 0;
    public:
    ForDestructor(){
        cout<<"it is a constructor\n";
    }
    ~ForDestructor(){
        cout<<"it is a destructor\n";
    }
    void Method();

    static void get(){
        cout<< abc; // inside static we can not use non static without object
        ForDestructor a;
        cout<< a.abcd<<endl<<a.g;
    }
};
int ForDestructor::abc;
// important to write for abc.
void ForDestructor :: Method(){
    // definition
    cout<< "definition using scope resolution\n";
    string s = "raj";
    cout<<s.at(0);
    for(int i = 0; i<s.length(); i++)
{
    if(s.at(i) == 'a')
    {
        break; // exit(0) is used to terminate program without executing any further line of code.
    }

}
cout<<"exit";
}
int main()
{
ForDestructor obj1, obj2,ojb3;
obj1.Method();
obj1.get();
cout<<endl<< obj2.abc << endl;
ForDestructor::get();
ForDestructor *obj4 = new ForDestructor;
ForDestructor *obj5 = new ForDestructor;
delete obj4;
delete obj5;
string s = "raj";
cout<<s.at(0);


}
// now destructor will get executed.
