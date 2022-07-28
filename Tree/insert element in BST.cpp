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
    void insert_in_BST(TreeNode* root, int val)
    {
        
            if (val > root->val)
            {
                if (root->right) insert_in_BST(root->right, val);
                else
                {
                    TreeNode* new_node = new TreeNode(val);
                    root->right = new_node;
                }
            }
            else
            {
                if (root->left) insert_in_BST(root->left, val);
                else
                {
                    TreeNode* new_node = new TreeNode(val);
                    root->left = new_node;
                }
            }
    }
    
    
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL)
        {
            TreeNode* new_node = NULL;
            new_node = new TreeNode(5);
            root = new_node;
            cout << root->val;
        }
        else insert_in_BST(root, val);
        return root;
    }
};
