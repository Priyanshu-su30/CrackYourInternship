class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* returnNode = new ListNode(INT_MIN);

        ListNode* head = returnNode;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val<=list2->val){
                returnNode->next = list1;
                list1=list1->next;
            }else{
                returnNode->next=list2;
                list2=list2->next;
            }
            returnNode = returnNode->next;            
        }

        if(list1==nullptr){
            returnNode->next = list2;
        }else if(list2==nullptr){
            returnNode->next=list1;
        }
        return head->next;
    }
};
