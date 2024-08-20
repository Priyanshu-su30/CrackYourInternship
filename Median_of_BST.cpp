int countNodes(Node* root) {
        if (!root) return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    void inorderTraversal(Node* root, int& count, int target, int& result) {
        if (!root) return;
        inorderTraversal(root->left, count, target, result);
        count++;
        if (count == target) {
            result = root->data;
            return;
        }
        inorderTraversal(root->right, count, target, result);
    }
float findMedian(struct Node *root)
{
      //Code here
      int n = countNodes(root);
        int count = 0;
        int median1 = 0, median2 = 0;

        inorderTraversal(root, count, (n + 1) / 2, median1);

        if (n % 2 == 0) {
            count = 0;
            inorderTraversal(root, count, (n + 1) / 2 + 1, median2);
            return (median1 + median2) / 2.0;
        } else {
            return median1;
        }
}
