class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head)
            return nullptr;

        Node* current = head;
        while (current) {
            Node* copy = new Node(current->val);
            copy->next = current->next;
            current->next = copy;
            current = copy->next;
        }

        current = head;
        while (current) {
            if (current->random) {
                current->next->random = current->random->next;
            }
            current = current->next->next;
        }

        current = head;
        Node* newHead = head->next;
        Node* copy = newHead;

        while (current) {
            current->next = current->next->next;
            if (copy->next) {
                copy->next = copy->next->next;
            }
            current = current->next;
            copy = copy->next;
        }

        return newHead;
    }
};
