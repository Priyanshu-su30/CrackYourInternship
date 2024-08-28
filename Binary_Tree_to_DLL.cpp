class Solution {
  public:
  
    void convertToDLL(Node* root, Node*& head, Node*& prev) {
        if (root == nullptr) return;
    
        // Recursively convert the left subtree
        convertToDLL(root->left, head, prev);
    
        // If this is the first node (leftmost node), set it as head of DLL
        if (prev == nullptr) {
            head = root;
        } else {
            // Adjust the pointers for DLL
            prev->right = root;
            root->left = prev;
        }
        
        // Mark this node as previous for the next node
        prev = root;
    
        // Recursively convert the right subtree
        convertToDLL(root->right, head, prev);
    }

    Node* bToDLL(Node* root) {
        // code here
        Node* head = nullptr;
        Node* prev = nullptr;
        convertToDLL(root, head, prev);
        return head;
    }
};
