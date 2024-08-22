Node* buildBST(int pre[], int& index, int key, int min, int max, int size) {
        if (index >= size) {
            return nullptr;
        }
    
        Node* root = nullptr;
    
        if (key > min && key < max) {
            root = newNode(key);
            index++;
    
            if (index < size) {
                root->left = buildBST(pre, index, pre[index], min, key, size);
                root->right = buildBST(pre, index, pre[index], key, max, size);
            }
        }
    
        return root;
    }

    Node* Bst(int pre[], int size) {
        int index = 0;
        return buildBST(pre, index, pre[0], INT_MIN, INT_MAX, size);
    }
