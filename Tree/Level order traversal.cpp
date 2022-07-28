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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> res;
        
        if (root == NULL) return res;
        q.push(root);
        
        vector<int> sub;
        int level_count;

        while (!q.empty())
        {
            level_count = q.size();
            for (int i = 0; i < level_count; ++i)
            {
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                sub.push_back(q.front()->val);
                q.pop();
            }
            res.push_back(sub);
            sub.clear();
        }
        return res;
    }
};
