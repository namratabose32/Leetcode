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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr=head;
        if(head==NULL)
            return head;
        while(curr->val==val){
            curr=curr->next;
            head=head->next;
            if(curr==NULL)
                return head;
        }
        while(curr){
            while(curr && curr->next && curr->next->val==val){
                if(curr->next->next==NULL){
                    curr->next=NULL;
                    break;
                }else{
                    curr->next=curr->next->next;
                }
            }
            curr=curr->next;
        }
        return head;
    }
};