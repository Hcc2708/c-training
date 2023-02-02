#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};
int search(vector<int>inorder, int start, int end, int curr)
{
    while(start<= end)
    {
        if(inorder[start] == curr)
        return start;
        start++;
    }
    return -1;
}
TreeNode *constructTree(vector<int>preorder, vector<int>inorder, int start, int end)
{
    if(start<=end)
    {
        static int idx = 0;
        if(idx > preorder.size()-1) return NULL;
        int curr = preorder[idx];
        int pos = search(inorder, start, end, curr);
        if(pos == -1) return NULL;
        TreeNode *nnode = new TreeNode(curr);
        idx++;
        
        nnode->left = constructTree(preorder, inorder, start, pos-1);
        nnode->right = constructTree(preorder, inorder, pos+1, end);
        if(nnode->left == NULL && nnode->right == NULL)
        {
            return nnode;
        }
        else if(idx != preorder.size())
        {
            if(nnode->left ==  NULL && start <= pos-1)
            {
                nnode->left = constructTree(preorder, inorder, start, pos-1);
            }
            if(nnode->right == NULL && pos+1 <= end)
            {
                nnode->right = constructTree(preorder, inorder, pos+1, end);
            }
        }
        return nnode;
    }
    return NULL;
}
void inordertraversal(TreeNode * root)
{
    if(root != NULL)
    {
        inordertraversal(root->left);
        cout<<root->val<<" ";
        inordertraversal(root->right);
    }
}
int main()
{
    vector<int>preorder{-1};
    vector<int>inorder{-1};
    TreeNode * root = constructTree(preorder, inorder, 0, preorder.size()-1);
    inordertraversal(root);
}