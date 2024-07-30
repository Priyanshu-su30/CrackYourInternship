class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != nullptr) {
            if (curr->val == val) {
                prev->next = curr->next;
                 

                    delete curr;
                 

            } else {
                prev = curr;
            }
            curr = prev->next;
        }

        return dummy->next;
    }
};
