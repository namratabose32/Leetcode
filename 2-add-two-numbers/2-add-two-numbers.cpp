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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(0),*curr=ans;
        int c=0;
        while(l1!=NULL || l2!=NULL || c){
            int x=(l2!=NULL?l2->val:0) + (l1!=NULL?l1->val:0) + c;
            c=x/10;
            curr->next=new ListNode(x%10);
            curr=curr->next;
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;
        }
        return ans->next;
    }
};