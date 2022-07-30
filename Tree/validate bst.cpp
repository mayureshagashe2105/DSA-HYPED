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
    
    void inorder(TreeNode* node, long &prev, bool &flag)
    {
        if(!node) return;
        if(!flag) return;
        
        inorder(node->left, prev, flag);
        if (prev >= node->val) flag = false;
        else prev = node->val;
        inorder(node->right, prev, flag);
    }
    
    
    
    bool isValidBST(TreeNode* root) {
        bool flag = true;
        long prev = LONG_MIN;
        inorder(root, prev, flag);
        return flag;
    }
};
