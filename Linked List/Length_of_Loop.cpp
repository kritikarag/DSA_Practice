int countNodesinLoop(struct Node *head)
{
    if (head==NULL || head->next==NULL)return 0;
    struct Node* slow=head, *fast=head;
    while(slow && fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            int count=1;
            slow=slow->next;
            while(slow!=fast){
                count++;
                slow=slow->next;
            }
            return count++;
        }
    }
    return 0;
}
