class Solution {
public:
//USING ITERATION
    // ListNode* reverseList(ListNode* head) {
    //     ListNode*prev=NULL;
    //     ListNode*curr=head;
    //     ListNode*fwd;

    //     while(curr!=NULL){
    //         fwd=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=fwd;
    //     }
    //     return prev;
    // }

//USING RECURSION
    ListNode* reverseList(ListNode* head) {
        if (head==NULL || head->next==NULL){
            return head;
        }
        ListNode* newhead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
    }
};
