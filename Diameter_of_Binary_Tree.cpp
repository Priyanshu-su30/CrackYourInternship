class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;

        return max(maxDepth(root->left), maxDepth(root->right))+1 ;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;

        int lHeight = maxDepth(root->left);
        int rHeight = maxDepth(root->right);
        int currDiameter = lHeight + rHeight ;

        int lDiameter = diameterOfBinaryTree(root->left);
        int rDiameter = diameterOfBinaryTree(root->right);

        return max(currDiameter ,max(lDiameter, rDiameter));
    }
};
