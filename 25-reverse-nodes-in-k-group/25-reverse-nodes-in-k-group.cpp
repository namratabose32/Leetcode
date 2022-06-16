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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prevptr=NULL,*currptr=head,*nextptr;
        int c=0;
        ListNode* cnt=head;
        while(c<k && cnt!=NULL){
            c++;
            cnt=cnt->next;
        }
        if(c<k){
            return currptr;
        }c=0;
        while(c<k && currptr!=NULL){
            c++;
            nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr=nextptr;
        }
        if(nextptr!=NULL){
            head->next=reverseKGroup(nextptr,k);
        }
        return prevptr;
    }
};