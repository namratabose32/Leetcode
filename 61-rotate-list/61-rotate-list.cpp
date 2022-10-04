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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* ans=head,*count=head;
        if(head==NULL || head->next==NULL)
            return head;
        int n=0;
        while(count!=NULL){
            n++;
            count=count->next;
        }
        k=k%n;
        for(int i=1;i<=k;i++){
            ListNode *curr=ans;
            while(curr->next->next!=NULL){
                curr=curr->next;
            }ListNode* end=curr->next;
            curr->next=NULL;
            end->next=ans;
            ans=end;
        }return ans;
    }
};