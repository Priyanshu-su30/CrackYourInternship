class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;

        int lHeight = maxDepth(root->left);
        int rHeight = maxDepth(root->right);
        return max(lHeight, rHeight)+1 ;
    }
};
