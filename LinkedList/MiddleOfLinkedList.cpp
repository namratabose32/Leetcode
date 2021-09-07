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
    ListNode* middleNode(ListNode* head) {
        int c=0;
        ListNode *curr=head;
        while(curr!=NULL){
            curr=curr->next;
            c++;
        }
        curr=head;
        for(int i=0;i<c/2;i++)
            curr=curr->next;
        return curr;
    }
};
