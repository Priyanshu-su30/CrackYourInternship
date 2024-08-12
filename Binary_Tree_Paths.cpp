class Solution {
public:
    vector<string> ans;
    void path(TreeNode* root, string s){
        if(!root) return;

        if(s.empty())
        s+=to_string(root->val);

        else
        s+="->"+to_string(root->val);

        if(!root->left and !root->right){
            ans.push_back(s);
            return;
        }

        path(root->left, s);
        path(root->right, s);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        path(root, "");
        return ans;  
    }
};
