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
    ListNode* merge(ListNode* l1, ListNode* l2) {
        //// Iterative Approach
        //         ListNode *start = new ListNode();
        //         ListNode *tmp = start;

        //         while(l1 && l2) {
        //             if(l1->val < l2->val) {
        //                 tmp->next = l1;
        //                 l1 = l1->next;
        //             } else {
        //                 tmp->next = l2;
        //                 l2 = l2->next;
        //             }
        //             tmp = tmp->next;
        //         }
        //         if(l1) tmp->next = l1;
        //         if(l2) tmp->next = l2;
        //         return start->next;

        // Recursive Approach
        if (!l1) return l2;
        if (!l2) return l1;
        ListNode* head = l1->val <= l2->val ? l1 : l2;
        head->next = l1->val <= l2->val ? merge(l1->next, l2) : merge(l1, l2->next);
        return head;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return NULL;

        ListNode* head = lists[0];

        for (int i = 1; i < lists.size(); i++) {
            head = merge(head, lists[i]);
        }
        return head;
    }
};
