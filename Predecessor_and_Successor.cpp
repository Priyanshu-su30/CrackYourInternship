class Solution
{
    public:
    
    void findPredecessor(Node* root, Node*& predecessor, int key) {
        if (!root) return;
    
        if (root->key >= key) {
            findPredecessor(root->left, predecessor, key);
        } else {
            predecessor = root;
            findPredecessor(root->right, predecessor, key);
        }
    }
    
    void findSuccessor(Node* root, Node*& successor, int key) {
        if (!root) return;
    
        if (root->key <= key) {
            findSuccessor(root->right, successor, key);
        } else {
            successor = root;
            findSuccessor(root->left, successor, key);
        }
    }
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        findPredecessor(root, pre, key);

        findSuccessor(root, suc, key);
    }
};
