
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
    int height = 0;
    TreeNode* depth(TreeNode *root, int val)
    {
        if(root != NULL)
        {
            if(height >= val){}
            else height++;

            root->left = depth(root->left, val + 1);
            root->right = depth(root->right, val + 1);
           
        }
        else return NULL;
        return root;
    }
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
       depth(root, 1);
       return height;
    }
};