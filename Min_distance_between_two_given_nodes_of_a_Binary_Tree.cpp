class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node* findLCA(Node* root, int a, int b) {
        if (root == NULL)
            return NULL;
    
        if (root->data == a || root->data == b)
            return root;
    
        Node* left = findLCA(root->left, a, b);
        Node* right = findLCA(root->right, a, b);
    
        return left != NULL && right != NULL ? root : left != NULL ? left : right;
    }
    
    int findLevel(Node* root, int k) {
        if (root == NULL)
            return -1;
    
        if (root->data == k)
            return 0;
    
        int left = findLevel(root->left, k);
        if (left != -1)
            return left + 1;
    
        int right = findLevel(root->right, k);
        if (right != -1)
            return right + 1;
    
        return -1;
    }
    int findDist(Node* root, int a, int b) {
        // Your code here
        Node* lca = findLCA(root, a, b);

        int distA = findLevel(lca, a);
        int distB = findLevel(lca, b);
    
        return distA + distB;
    }
};
