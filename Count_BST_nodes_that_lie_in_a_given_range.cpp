class Solution{
public:
    int getCount(Node *root, int l, int h){
        // your code goes here   
        if (root == nullptr) return 0;

        if (root->data >= l && root->data <= h)
            return 1 + getCount(root->left, l, h) + getCount(root->right, l, h);

        if (root->data < l)
            return getCount(root->right, l, h);

        return getCount(root->left, l, h);
    }
};
