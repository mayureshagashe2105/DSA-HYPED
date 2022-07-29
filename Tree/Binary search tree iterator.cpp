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
class BSTIterator {
public:
    vector<TreeNode*> in_order;
    TreeNode* nen;
    int counter;
    
    void in_order_t(TreeNode* node)
    {
        if(!node) return;
        
        in_order_t(node->left);
        this->in_order.push_back(node);
        in_order_t(node->right);
    }
    
    
    BSTIterator(TreeNode* root) {
        this->in_order_t(root);
        this->nen = NULL;
        this->counter = 0;
        
    }
    
    int next() {
        this->nen = this->in_order[this->counter++];
        return this->nen->val;
    }
    
    bool hasNext() {
        if(this->counter >= this->in_order.size()) return false;
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
