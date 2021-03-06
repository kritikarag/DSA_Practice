ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        //If list1 is empty then return list2
        if(list1==NULL)return list2;
        
        //If list1 is empty then return list2
        if(list2==NULL)return list1;
        
        //Create a head pointer for new list
        ListNode*head=list1;
        
        //Assign the head pointer the node with the smallest value
        if(list1->val > list2->val){
            head=list2;
            list2=list2->next;
        }
        else{
            list1=list1->next;
        }
        
        //Create a temp/curr node 
        ListNode* curr=head;
        
        while(list1 && list2){
            if(list1->val > list2->val){
            curr->next=list2;
            list2=list2->next;
        }
        else{
            curr->next=list1;
            list1=list1->next;
        }
            curr=curr->next;
        }
        
        if(!list1)curr->next=list2;
        else curr->next=list1;
        
        return head;
    }
