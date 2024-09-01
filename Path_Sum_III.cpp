class Solution {
public:
    int helper(TreeNode* node, int targetSum, int currentSum, unordered_map<int, int>& prefixSum) {
        if (!node)
            return 0;

        currentSum += node->val;
        int count = prefixSum[currentSum - targetSum]; 
        prefixSum[currentSum]++;

        int leftCount = helper(node->left, targetSum, currentSum, prefixSum);
        int rightCount = helper(node->right, targetSum, currentSum, prefixSum);

        prefixSum[currentSum]--;

        return count + leftCount + rightCount;
    }

    int pathSum(TreeNode* root, int targetSum) {
        if (!root)
            return 0;

        unordered_map<int, int> prefixSum;
        prefixSum[0] = 1; 
        return helper(root, targetSum, 0, prefixSum);
    }
};
