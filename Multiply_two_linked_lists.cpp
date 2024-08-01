class solution {
  public:
    const int MOD = 1e9 + 7;
  
    long long listToNumber(Node* head) {
        long long num = 0;
        while (head != nullptr) {
            num = (num * 10 + head->data) % MOD;
            head = head->next;
        }
        return num;
    }

    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        long long num1 = listToNumber(first);
        long long num2 = listToNumber(second);
        return (num1 * num2) % MOD;
    }
};
