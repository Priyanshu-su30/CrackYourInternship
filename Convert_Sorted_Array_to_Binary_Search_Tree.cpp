class Solution {
public:
    TreeNode* helper(vector<int>& nums, int s, int e){
        if(s>e) return NULL;

        int mid=(s+e)>>1;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = helper(nums, s, mid-1);
        root->right = helper(nums, mid+1, e);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return helper(nums, 0, nums.size()-1);
    }
};
