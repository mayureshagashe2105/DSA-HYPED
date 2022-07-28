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
    
    void preorder_t(TreeNode* node, vector<int> &res)
    {
        if (node == NULL) return;
        
        res.push_back(node->val);
        preorder_t(node->left, res);
        preorder_t(node->right, res);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorder_t(root, res);
        return res;
    }
};
