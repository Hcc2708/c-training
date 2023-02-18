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
    void preorder(TreeNode *node)
    {
        if(node == NULL) return;
        else if(node->left == NULL && node->right == NULL) return;
        else if(node->left != NULL && node->right != NULL)
        {
            TreeNode *temp = node->left;
            node->left = node->right;
            node->right = temp;
        }
        else if(node->left == NULL)
        {
            node->left = node->right;
            node->right = NULL;
        }
        else if(node->right == NULL)
        {
            node->right = node->left;
            node->left = NULL;
        }
        
        preorder(node->left);
        preorder(node->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return NULL;
        if(root ->left == NULL && root->right == NULL )return root;
        preorder(root);
        return root;
    }
};