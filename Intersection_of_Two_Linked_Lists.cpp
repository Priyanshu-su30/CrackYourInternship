class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*a=headA;
        ListNode*b=headB;

        while(a!=b){
            a=(a==NULL) ? headA : a->next;
            b=(b==NULL) ? headB : b->next;
        }
        return a;
    }
};
