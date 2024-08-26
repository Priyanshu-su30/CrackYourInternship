class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) {
            return result;
        }

        stack<TreeNode*> stack;
        TreeNode* prev = nullptr;

        while (root != nullptr || !stack.empty()) {
            if (root != nullptr) {
                stack.push(root);
                root = root->left;
            } else {
                TreeNode* top = stack.top();
                if (top->right == nullptr || top->right == prev) {
                    result.push_back(top->val);
                    stack.pop();
                    prev = top;
                } else {
                    root = top->right;
                }
            }
        }
        return result;
    }
};
