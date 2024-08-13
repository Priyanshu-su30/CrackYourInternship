class Solution {
public:
    vector<TreeNode*> path;
    vector<int> ans;
    bool findPath(TreeNode* root, TreeNode* target){
        if(!root) return false;

        if(root == target){
            path.push_back(root);
            return 1;
        }

        bool left, right;
        left=findPath(root->left, target);
        right=findPath(root->right, target);

        if(left){
            path.push_back(root);
            return true;
        }
        if(right){
            path.push_back(root);
            return true;
        }
        return false;
    }

    void helper(TreeNode* root, int k, TreeNode* alreadyDone){
        if(!root or k<0 or root==alreadyDone)
        return;

        if(k==0)
        ans.push_back(root->val);

        helper(root->left, k-1, alreadyDone);
        helper(root->right, k-1, alreadyDone);
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        findPath(root, target);
        for(auto p:path)
        cout<<p->val<<" ";
        for(int i=0; i<path.size(); i++){
            if(i==0)
            helper(path[i], k-i, NULL);

            else
            helper(path[i], k-i, path[i-1]);
        }
        return ans;
    }
};
