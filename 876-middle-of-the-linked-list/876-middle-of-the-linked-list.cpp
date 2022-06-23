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
        int n=0;
        ListNode* curr=head;
        while(curr!=NULL){
            n++;
            curr=curr->next;
        }
        if(n%2==0)
            n++;
        n/=2;
        curr=head;
        while(n!=0){
            curr=curr->next;
            n--;
        }return curr;
    }
};