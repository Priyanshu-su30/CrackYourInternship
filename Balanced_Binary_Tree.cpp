class Solution {
public:
    bool flag=1;
    int height(TreeNode* root){
        if(!root) return 0;

        int l=height(root->left);
        int r=height(root->right);

        if(abs(l-r)<=1)
        return 1+max(l,r);

        else{
            flag=0;
            return 0;
        }
    }

    bool isBalanced(TreeNode* root) {
        if(!root) return 1;

        height(root);

        return flag==1;
    }
};
