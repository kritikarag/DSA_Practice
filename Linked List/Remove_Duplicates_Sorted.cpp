ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL|| head->next==NULL)return head;
        
        ListNode* curr=head;
        while(curr!=NULL){
         while(curr->next && curr->val==curr->next->val) curr->next = curr->next->next; 
            curr=curr->next;
        }
        return head; 
    }
