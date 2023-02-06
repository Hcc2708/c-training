#include<iostream>
using namespace std;
int main()
{
 string s1("+"),s2("/");
 cout<<s1.compare(s2);
 s1.append(s2);
 s1.append("]");
 cout<<s1;
 int i = 0;
 cout<<s1.at(i);
 char c = s1.at(i);
 cout<<c;
}
