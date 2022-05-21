 Node* findMid(Node* head){
      Node* fast,*slow;
        fast=head->next;slow = head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
  }
  
  Node* merge(Node* left,Node* right){
      
      if(!left) return right;
      if(!right) return left;
      
      Node* dum = new Node(-1);
      Node* temp = dum;
      
      while(left && right){
          if(left->data > right->data){
              temp->next = right;
              temp=right;
              right=right->next;
              
          }
          else{
              temp->next = left;
              temp=left;
              left=left->next;
              
          }
      }
      while(left){
          temp->next=left;
          temp=left;
          left=left->next;
      }
      while(right){
          temp->next=right;
          temp=right;
          right=right->next;
      }
      return dum->next;
  }
  
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        //base case
        if(!head || head->next == NULL) return head;
        
        Node*right;
        Node* mid = findMid(head);
        right=mid->next;
        mid->next=NULL;
        Node* left = mergeSort(head);
        right = mergeSort(right);
        
        Node* res = merge(left,right);
        
        return res;
    }
};
