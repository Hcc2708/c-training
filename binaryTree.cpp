#include<iostream>
#include<vector>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};
vector<int>v;
vector<vector<int>>v2;
void printPath(TreeNode *root)
{
    if(root== NULL) return;
    v.push_back(root->val);
    printPath(root->left);
    printPath(root->right);
    if(root->left == NULL && root->right== NULL)
   {
     v2.push_back(v);
     
   }
   v.pop_back();
}