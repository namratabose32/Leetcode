class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return head;

        ListNode *first, *last, *current;
        first = head;
        current = head;

        //! Make sure the first element does not start with val.
        while (first->val == val) {
            first = first->next;
            if (first == NULL) {
                return NULL;
            }
        }
        last = head;
        current = head->next;
        while (current != NULL) {
            if (current->val == val) {
                last->next = current->next;
                current = current->next;
            } else {
                last = current;
                current = current->next;
            }
            if (current == NULL || current->next == NULL) {
                break;
            }
        }

        if ( current != NULL && current->val == val) {
            last->next = current->next;
        }

        return first;
    }
};
