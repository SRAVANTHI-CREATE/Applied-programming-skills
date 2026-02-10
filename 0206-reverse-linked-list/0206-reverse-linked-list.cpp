class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL, *cur = head;

        while (cur) {
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        return prev;
    }
};
