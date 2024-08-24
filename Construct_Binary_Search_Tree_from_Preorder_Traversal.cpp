class Solution {
public:
    TreeNode* helper(vector<int>& A, int &i, int bound){
        if(i==A.size() or A[i]>=bound)
        return NULL;

        TreeNode* root = new TreeNode(A[i++]);
        root->left=helper(A, i, root->val);
        root->right=helper(A, i, bound);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return helper(preorder, i, INT_MAX);
    }
};
