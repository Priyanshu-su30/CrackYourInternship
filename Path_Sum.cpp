class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL)
        return false;

        stack<TreeNode*> path ;
        stack<int> sumPath ;

        path.push(root);
        sumPath.push(root->val);

        while(!path.empty()){
            TreeNode* temp = path.top();
            path.pop();
            int tempVal = sumPath.top();
            sumPath.pop();

            if(temp->left == NULL && temp->right == NULL && tempVal == targetSum)
            return true;
            
            if(temp->right != NULL){
                path.push(temp->right);
                sumPath.push(temp->right->val + tempVal);
            }

            if(temp->left != NULL){
                path.push(temp->left);
                sumPath.push(temp->left->val + tempVal);
            }
        }
        return false;
    }
};
