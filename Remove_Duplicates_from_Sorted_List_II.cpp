class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) {
            return head; 
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr) {
            while (curr->next && curr->val == curr->next->val) {
                curr = curr->next;
            }

            if (prev->next == curr) {
                prev = prev->next;
            } else {
                prev->next = curr->next;
            }

            curr = curr->next;
        }

        return dummy->next;
    }
};
