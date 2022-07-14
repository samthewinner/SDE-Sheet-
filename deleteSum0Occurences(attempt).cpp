 ListNode* removeZeroSumSublists(ListNode* head) {
        stack<ListNode*>s,t;
        ListNode*temp,*newHead;
        temp = head;newHead=head;
        if(temp->next == NULL) return temp;
        int sum = temp->val;
        s.push(temp);
        temp=temp->next;        
        while(temp){
            if(abs(sum) > abs(sum+temp->val) and abs(sum)>= temp->val){    
                int tempsum = 0;
                while(!s.empty()){
                    ListNode* p = s.top();
                    int data = s.top()->val;
                    tempsum+=data;
                    t.push(p);
                    s.pop();
                    if(tempsum + temp->val == 0) break;
                    // sum-=data;
                }
//                 if not stack empty and sum = 0
                if(!s.empty() and tempsum + temp->val == 0){
                    // if(!newHead) newHead = s.top();
                    s.top()->next = temp->next;
                     
                    // s.push(temp);
                }
//                 ifstack empty and sum = 0
                else if(tempsum + temp->val == 0 and s.empty()){
                    newHead = temp->next;
                    // s.push(temp);
                }
//                 if stack empty and sum not 0,refill the stack 
                else if(s.empty() and tempsum!=0){
                    while(!t.empty()){
                        s.push(t.top());
                        t.pop();                        
                    }                                        
                }
            }
            else {
                sum+=temp->val;
                s.push(temp);
            }
            temp=temp->next;          
        }
        return newHead;
    }
