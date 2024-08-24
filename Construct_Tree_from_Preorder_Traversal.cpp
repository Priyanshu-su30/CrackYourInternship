Node* constructTreeUtil(int& index, int n, int pre[], char preLN[]) {
    if (index >= n)
        return nullptr;

    Node* node = new Node(pre[index]);

    if (preLN[index] == 'L') {
        index++;
        return node;
    }

    index++;
    node->left = constructTreeUtil(index, n, pre, preLN);
    node->right = constructTreeUtil(index, n, pre, preLN);

    return node;
}

Node* constructTree(int n, int pre[], char preLN[]) {
    int index = 0;
    return constructTreeUtil(index, n, pre, preLN);
}
