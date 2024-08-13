class BSTIterator {
public:
    int i = -1;
    vector<int> nodes;
    void inorder(TreeNode* root) {
        if (!root)
            return;

        inorder(root->left);
        nodes.push_back(root->val);
        inorder(root->right);
    }

    BSTIterator(TreeNode* root) { inorder(root); }

    int next() { return nodes[++i]; }

    bool hasNext() {
        int n = nodes.size() - 1;
        return i < n;
    }
};
