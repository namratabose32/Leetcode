/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr=head,*t=NULL;
        int k=0;
        while(curr != NULL){
            curr=curr->next;
            k++;
        }
        if(k==n)
            return head->next;
        curr=head;
        for(int i=0;i<k-n-1;i++)
            curr=curr->next;
        ListNode *temp=curr->next;
        if(n==1){
            curr->next=NULL;
            delete temp;
            return head;
        }
        curr->next=curr->next->next;
        delete temp;
        return head;
    }
};
