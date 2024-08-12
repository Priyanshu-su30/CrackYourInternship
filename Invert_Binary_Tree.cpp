class Solution {
public:
    void postorder(TreeNode* root){
        if(!root) return;

        postorder(root->left);
        postorder(root->right);

        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
    }

    TreeNode* invertTree(TreeNode* root) {
        postorder(root);
        return root;    
    }
};
