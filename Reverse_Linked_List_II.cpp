class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy = new ListNode(0);
        dummy->next=head;

        ListNode* leftPrev = dummy;
        ListNode* currNode = head;

        for(int i=0; i<left-1; i++){
            leftPrev=leftPrev->next;
            currNode=currNode->next;
        }

        ListNode* subListHead = currNode;

        ListNode* preNode = NULL;

        for(int i=0; i<=right-left; i++){
            ListNode* next = currNode->next;
            currNode->next = preNode;
            preNode = currNode;
            currNode = next;
        }

        leftPrev->next = preNode;
        subListHead->next = currNode;

        return dummy->next;
    }
};
