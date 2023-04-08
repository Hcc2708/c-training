/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfs(Node *n, Node* node, map<int,Node*>&vis)
    {
        if(node == NULL) node;
        n = new Node(node->val, node->neighbors);
        vis[n->val] = n;
        for(int i = 0; i< node->neighbors.size(); i++)
        {
            if(!vis[node->neighbors[i]->val])
            {
                n->neighbors[i] = dfs(n->neighbors[i], node->neighbors[i], vis);
            }
            else
            {
                n->neighbors[i] = vis[node->neighbors[i]->val];
            }
        }
        return n;
    }
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;
        Node *n = NULL;
        map<int, Node*>vis;
        
        return dfs(n, node, vis);
    }
};