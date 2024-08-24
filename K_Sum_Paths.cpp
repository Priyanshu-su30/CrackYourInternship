class Solution {
  public:
  
    int countPathsInternal(Node* root, int k, int currSum, unordered_map<int, int>& prefixSum) {
        if (!root) {
            return 0;
        }
    
        currSum += root->data;
    
        int count = prefixSum[currSum - k];
    
        prefixSum[currSum]++;
    
        int leftCount = countPathsInternal(root->left, k, currSum, prefixSum);
        int rightCount = countPathsInternal(root->right, k, currSum, prefixSum);
    
        prefixSum[currSum]--;
    
        return count + leftCount + rightCount;
    }
    
    int sumK(Node *root, int k) {
        // code here
        if (!root) {
            return 0;
        }
    
        unordered_map<int, int> prefixSum;
        prefixSum[0] = 1; 
    
        return countPathsInternal(root, k, 0, prefixSum);
    }
};
