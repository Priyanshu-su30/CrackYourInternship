class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==NULL)
        return ans;

        q.push(root);
        bool dir=1;

        while(!q.empty()){
            int size = q.size();
            vector<int>path(size);
            for(int i=0; i<size; i++){
                TreeNode* node=q.front();
                q.pop();
                int idx;
                if(dir==1)
                idx = i;
                else
                idx=size-i-1;

                path[idx]=node->val;

                if(node->left)
                q.push(node->left);

                if(node->right)
                q.push(node->right);

            }
            dir=!dir;
            ans.push_back(path);
        }
        return ans;
    }
};
