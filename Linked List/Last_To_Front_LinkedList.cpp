ListNode *moveToFront(ListNode *head){
        
        if(head->next==NULL)return head;
        ListNode *prev=NULL, *last=head;
        while(last->next){
            prev=last;
            last=last->next;
        }
        prev->next=NULL;
        last->next=head;
        head=last;
        
        return head;
    }
