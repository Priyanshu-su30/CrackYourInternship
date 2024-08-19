class Solution {
public:
    int ans, cnt=0;
    void inorder(TreeNode* root, int k){
        if(!root) return;
        inorder(root->left, k);

        cnt++;
        if(cnt==k){
            ans=root->val;
            return;
        }
        inorder(root->right,k);
    } 
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return ans;
    }
};
