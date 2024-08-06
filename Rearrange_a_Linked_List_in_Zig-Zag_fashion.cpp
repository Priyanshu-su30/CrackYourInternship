void zigZagList(Node* head) {  
    bool flag = true; 
  
    Node* current = head; 
      if (!head || !head->next) 
          return head; 
      if (flag == 1) { 
        if (head->data > head->next->data) 
            swap(head->data, head->next->data); 
        return zigzag(head->next, !flag); 
      } 
      else { 
        if (head->data < head->next->data) 
            swap(head->data, head->next->data); 
        return zigzag(head->next, !flag); 
      } 
    } 
} 
