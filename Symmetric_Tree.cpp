class Solution {
public:
    bool match(TreeNode* root1, TreeNode* root2){
        if(!root1 and !root2) return 1;

        if((!root1 and root2) || (root1 and !root2)) return 0;

        if(root1->val==root2->val)
            return match(root1->left, root2->right) && match(root1->right, root2->left);
        return false;
    }

    bool isSymmetric(TreeNode* root) {
        return match(root->left, root->right);
    }
};
