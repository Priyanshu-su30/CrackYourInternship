class Solution {
public:
    int length(ListNode*head){
        int len=0;

        while(head){
            len++;
            head=head->next;
        }
        return len;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL or n<=0){
            return head;
        }

        if(n==length(head)){
            ListNode*ans=head->next;
            head->next=NULL;
            return ans;
        }

        ListNode*fast=head;
        ListNode*slow=head;

        for(int i=0;i<n;i++){
            if(fast->next){
                fast=fast->next;
            }
        }

        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }

        slow->next=slow->next->next;

        return head;
    }
};
