class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head or !head->next) return head;
        ListNode* t = reverseList(head->next);
        ListNode* sn = head->next;
        sn->next = head;
        head->next=NULL;
        return t;
        
        
    }
};
