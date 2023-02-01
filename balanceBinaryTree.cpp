#include<iostream>
#include<vector>
#include<map>
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
    map<int, int>height;
    int calHeight(TreeNode *node)
    {
        if(node->left != NULL && node->right != NULL)
        return max(height[node->left->val], height[node->right->val]) +1;
        else if(node->left != NULL) return height[node->left->val] +1;
        else return height[node->right->val] + 1;
    }
    TreeNode* rotateLL(TreeNode *rnode)
    {
        TreeNode *temp = rnode->left;
        rnode->left = temp->right;
        temp->right = rnode;

        height[rnode->val] = calHeight(rnode);
        height[temp->val] = calHeight(temp);
        return temp;
    }
    TreeNode* rotateRR(TreeNode *rnode)
    {
        TreeNode *temp = rnode->right;
        rnode->right = temp->left;
        temp->left = rnode;
        height[rnode->val] = calHeight(rnode);
        height[temp->val] = calHeight(temp);
        return temp;
    }
    int checkBalance(TreeNode *ptr1, TreeNode *ptr2)
    {
        if(ptr1 != NULL && ptr2 != NULL)
        return height[ptr1->val] - height[ptr2->val];
        else if(ptr1 == NULL) return -height[ptr2->val];
        else return height[ptr1->val];
    }
    
    TreeNode* insertNode(TreeNode* root, int value)
    {
        if(root == NULL)
        return (new TreeNode(value));
        else if(root->val > value)
        root->left = insertNode(root->left, value);
        else if(root->val < value)
        root->right = insertNode(root->right, value);

        if(root->left != NULL && root->right != NULL)
        height[root->val] = max(height[root->right->val], height[root->left->val]) + 1;
        else if(root->left != NULL) height[root->val] = height[root->left->val] + 1;
        else height[root->val] = height[root->right->val]+1;

        int bal = checkBalance(root->left, root->right);

        if(bal > 1 && value < root->left->val)
        return rotateLL(root);
        if(bal < -1 && value > root->right->val)
        return rotateRR(root);
        if(bal > 1 && value > root->left->val)
        {
            root = rotateRR(root);
            return rotateLL(root);
        }
        if(bal < -1 && value < root->right->val)
        {
            root = rotateLL(root);
            return rotateRR(root);
        }
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++)
        {
            height[nums[i]] = 1;
        }
        // for(int i = 0; i<height.size(); i++)
        // {
        //     cout<<height[nums[i]]<< " ";
        // }
        TreeNode * root = NULL;
        for(int i =0; i<nums.size(); i++)
        {
            root = insertNode(root, nums[i]);
            cout<<root->val << height[root->val];
            if(i == 1) break; 
            
        }
        cout<<endl;
        cout<<root->right->val<<" "<< height[root->right->val];
        return root;
    }
};
int main()
{
    vector<int>nums{-10, -3, 0, 5, 9};
    cout<<nums[0];
    Solution obj;
    obj.sortedArrayToBST(nums);
}