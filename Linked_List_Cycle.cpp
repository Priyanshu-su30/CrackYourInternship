class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL or head->next==NULL){
            return NULL;
        }

        ListNode* h = head;
        ListNode* e = head;
        ListNode* g = head;

        while(g->next and g->next->next){
            g=g->next->next;
            h=h->next;

            if(h==g){
                while(h!=e){
                    e=e->next;
                    h=h->next;
                }
                return h;
            }
        }
        return NULL;
    }
};
