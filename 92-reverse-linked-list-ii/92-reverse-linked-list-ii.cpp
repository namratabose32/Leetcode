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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* ans=new ListNode(0),*prev=ans,*curr,*next;
        ans->next=head;
        for(int i=1;i<left;i++){
            prev=prev->next;
        }
        curr=prev->next;
        for(int i=0;i<right-left;i++){
            next=prev->next;
            prev->next=curr->next;
            curr->next=curr->next->next;
            prev->next->next=next;
        }
        return ans->next;
    }
};