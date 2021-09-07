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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr=head;
        if(curr==NULL || curr->next==NULL)
            return head;
        ListNode *ans1=new ListNode(-1);
        ListNode *ans=ans1;
        while(curr !=NULL){
            if(curr->next !=NULL && curr->val==curr->next->val){
                int x=curr->val;
                while(curr != NULL && curr->val==x)
                    curr=curr->next;
            }else{
                ans->next=curr;
                ans=ans->next;
                curr=curr->next;
            }
           
        } ans->next=NULL;
        return ans1->next;
    }
};
