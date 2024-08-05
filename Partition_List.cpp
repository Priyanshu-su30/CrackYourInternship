class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* left = new ListNode(0);
        ListNode* right = new ListNode(0); 

        ListNode* ltail = left;
        ListNode* rtail = right;

        while (head) {
            ListNode* temp =
                new ListNode(head->val); 
            if (head->val < x) {
                ltail->next = temp;
                ltail = ltail->next;
            } else {
                rtail->next = temp;
                rtail = rtail->next;
            }
            head = head->next;
        }

        ltail->next = (right->next != nullptr) ? right->next : nullptr;

        return left->next;
    }
};
