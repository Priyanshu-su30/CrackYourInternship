class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int dec_num = 0;
        int power = 0;
        while (head != nullptr) {
            if (head->val == 1) {
                dec_num += (pow(2,power));
            }
            power++;
            head=head->next;
        }
        return dec_num;
    }
};
