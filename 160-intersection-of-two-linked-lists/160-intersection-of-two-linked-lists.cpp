/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curra=headA, *currb=headB;
        if(curra==NULL || currb==NULL)
            return NULL;
        while(curra!=NULL && currb!=NULL && curra!=currb){
            curra=curra->next;
            currb=currb->next;
            if(curra==currb)
                return curra;
            if(curra==NULL)
                curra=headB;
            if(currb==NULL)
                currb=headA;
        }
        return curra;
    }
};