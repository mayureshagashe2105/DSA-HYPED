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
    
    void sum_left_leaves(TreeNode* root, int &suma)
    {
        if(!root) return;
        if(root->left)
            if(!root->left->right && !root->left->left) 
                suma += root->left->val;
        
        sum_left_leaves(root->left, suma);
        sum_left_leaves(root->right, suma);
    }
    
    
    int sumOfLeftLeaves(TreeNode* root) {
        int suma = 0;
        sum_left_leaves(root, suma);
        return suma;
    }
};
