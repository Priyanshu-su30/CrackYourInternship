class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q)
        return true;
        
        if (!p || !q)
        return false;
        
        return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
         
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot) return true; 
        
        if (!root)
        return false; 

        return isSameTree(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
