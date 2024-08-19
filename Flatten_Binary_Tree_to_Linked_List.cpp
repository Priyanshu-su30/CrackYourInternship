class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* current = root;

        while (current) {
            if (current->left) {
                TreeNode* rightmost = current->left;
                while (rightmost->right) {
                    rightmost = rightmost->right;
                }

                rightmost->right = current->right;
                current->right = current->left;
                current->left = NULL;
            }

            current = current->right;
        }
    }
};
