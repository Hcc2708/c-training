#include<iostream>
using namespace std;
struct Tree{
    int val;
    Tree *left, *right;
    Tree(): left(nullptr), right(nullptr){}
};
void inorder(Tree *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
}
int main()
{
    Tree *root = new Tree;
    root->val= 8;
    Tree *ptr = root;
    for(int i = 0; i<16; i++)
    {
        Tree *n = new Tree;
        n->val = i;
        ptr = root;
        Tree *temp = ptr;
        if(i != 8)
        {while(ptr != NULL)
        {
        if(n->val < ptr->val)
        {
            temp = ptr;
            ptr = ptr->left;
        }
        else
        {
            temp = ptr;
            ptr = ptr->right;
        }
        }
        if(temp->val < n->val) temp->right = n;
            else temp->left = n;}
    }
    inorder(root);
}