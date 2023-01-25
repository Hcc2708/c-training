#include<iostream>
using namespace std;
template<class T>
class Node{
    public:
    T s1;
    char var;
    Node *next;
};
int main()
{
    Node<int>*obj = new Node<int>;
    obj->s1 = 32;
    obj->var = 'a';
    Node<char>*s = new Node<char>;
    s->s1 = 'm';
    s->var = 'p'; 
    // obj->next = s; not allowed.
    // s->next = obj; not allowed


}