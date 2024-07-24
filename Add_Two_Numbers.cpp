class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode*temp = new ListNode(-1);
        ListNode*res=temp;

        while(l1 or l2 or carry){
            if(l1){
                carry+=l1->val;
                l1=l1->next;
            }
            if(l2){
                carry+=l2->val;
                l2=l2->next;
            }

            ListNode*node= new ListNode(carry%10);
            carry/=10;
            temp->next=node;
            temp=temp->next;
        }
        return res->next;
    }
};
