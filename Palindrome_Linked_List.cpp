class Solution {
public:

    ListNode* reverse(ListNode*head){
        ListNode*curr=head, *prev=nullptr,*fwd;

        while(curr){
            fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head==NULL ){
            return 0;
        }
        if(head->next==NULL ){
            return 1;
        }
        
        ListNode*slow=head,*fast=head;
        while(fast->next and fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode*a=head;
        ListNode*b=reverse(slow->next);

        slow->next=NULL;

        while(a and b){
            if(a->val!=b->val){
                return 0;
            }
            a=a->next;
            b=b->next;
        }
        return 1;
    }
};
