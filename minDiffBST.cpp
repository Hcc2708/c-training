#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    void inorder(TreeNode *root, int &mini, int &rootVal)
    {
        if(root == NULL) return;

        inorder(root->left, mini, rootVal);
        if((root->left != NULL || root->right != NULL) && rootVal != -1)
        {int x = root->val - rootVal;
        if(mini>x) mini = x;}
        else if(root->left == NULL && root->right == NULL && rootVal != -1) 
        {
            int x = root->val - rootVal;
            if(mini >x) mini = x;
        }
        rootVal = root->val;
        inorder(root->right, mini, rootVal);
    }
    int minDiffInBST(TreeNode* root) {
        int mini  = INT_MAX;
        int rootVal = -1;
        inorder(root, mini, rootVal);
        return mini;
    }
};

int main()
{
    // take input for tree and call the function.
}