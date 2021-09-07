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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *begin=NULL, *end=NULL, *curr=head;
        int n=0;
        while(curr != NULL){
            if(n==k-1)
                begin=curr;
            n++;
            curr=curr->next;
        }curr=head;
        for(int i=0;i<n-k;i++){
            curr=curr->next;
        }end=curr;
        int t=end->val;
        end->val=begin->val;
        begin->val=t;
        return head;
    }
};
