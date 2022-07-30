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
    void inorder(TreeNode* node, int &k, int &val)
    {
        if(!node) return;
        if(k == 0) return;

        inorder(node->left, k, val);
        if (k > 0)
        {
            val = node->val;
            --k;
        }
        inorder(node->right, k, val);
    }
    
    
    int kthSmallest(TreeNode* root, int k) {
        int val = 0;
        inorder(root, k, val);
        return val;
    }
};
