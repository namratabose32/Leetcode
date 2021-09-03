class Solution {
public:
    ListNode* reverseList(ListNode* head) {        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextptr;
        while(curr != NULL){
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }return prev;
    }
