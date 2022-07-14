Node* divide(int N, Node *head){
        Node* oh,*eh,*ep,*op,*temp,*nx;
        eh=oh=NULL;
        temp=head;
        while(temp){
            nx=temp->next;
            if(temp->data % 2 ==0){
                if(!eh){eh=ep=temp;
                    ep->next=NULL;
                }
                    
                
                else{
                    ep->next=temp;
                    ep=temp;
                    ep->next=NULL;
                }
            }
            else{
                if(!oh) {oh = op = temp;op->next=NULL;}
                else{
                    op->next=temp;
                    op=temp;
                    op->next=NULL;
                }
            }
            temp=nx;
        }
        if(eh==NULL) return oh;
        if(oh == NULL) return eh;
        temp=eh;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=oh;
        return eh;
    }
