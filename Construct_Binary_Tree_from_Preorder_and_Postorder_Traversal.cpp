class Solution {
public:
    TreeNode* buildTree(const vector<int>& preorder, int preStart, int preEnd, const vector<int>& postorder, int postStart, int postEnd, unordered_map<int, int>& postIndex) {
        if (preStart > preEnd)
            return nullptr;
        if (preStart == preEnd)
            return new TreeNode(preorder[preStart]);

        TreeNode* root = new TreeNode(preorder[preStart]);
        int leftRootVal = preorder[preStart + 1];
        int leftRootIndex = postIndex[leftRootVal];
        int leftSubtreeSize = leftRootIndex - postStart + 1;

        root->left =
            buildTree(preorder, preStart + 1, preStart + leftSubtreeSize, postorder, postStart, leftRootIndex, postIndex);
        root->right =
            buildTree(preorder, preStart + leftSubtreeSize + 1, preEnd, postorder, leftRootIndex + 1, postEnd - 1, postIndex);

        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        unordered_map<int, int> postIndex;
        for (int i = 0; i < postorder.size(); ++i) {
            postIndex[postorder[i]] = i;
        }
        return buildTree(preorder, 0, preorder.size() - 1, postorder, 0, postorder.size() - 1, postIndex);
    }
};
