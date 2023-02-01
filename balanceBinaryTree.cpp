/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
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
    
    TreeNode* insertNode(TreeNode* root, int val)
    {
        if(root == NULL)
        return new TreeNode(val);
        else if(root->val > val)
        root->left = insertNode(root->left, val);
        else if(root->val < val)
        root->right = insertNode(root->right, val);

        if(root->left != NULL && root->right != NULL)
        height[root->val] = max(height[root->right->val], height[root->left->val]) + 1;
        else if(root->left != NULL) height[root->val] = height[root->left->val] + 1;
        else height[root->val] = height[root->right->val]+1;

        int bal = checkBalance(root->left, root->right);

        if(bal > 1 && val < root->left->val)
        return rotateLL(root);
        if(bal < -1 && val > root->right->val)
        return rotateRR(root);
        if(bal > 1 && val > root->left->val)
        {
            root = rotateRR(root);
            return rotateLL(root);
        }
        if(bal < -1 && val < root->right->val)
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
        TreeNode * root;
        for(int i =0; i<nums.size(); i++)
        {
            root = insertNode(root, nums[i]);
        }
        return root;
    }
};