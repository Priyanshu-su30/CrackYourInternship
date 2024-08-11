class Solution {
public:
    void inorder(TreeNode* node, vector<int>& result) {
        if (node == nullptr) return; 
        inorder(node->left, result);
        result.push_back(node->val);
        inorder(node->right, result);
         
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == nullptr)
            return result;

        inorder(root, result);
        return result;
    }
};
