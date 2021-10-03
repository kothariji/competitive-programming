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
class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == nullptr)
            return head;
        ListNode *oddHead = head;
        ListNode *evenHead = head->next;
        ListNode *even = head->next;
        while (true)
        {
            if (!evenHead)
                break;
            if (!evenHead->next)
                break;
            oddHead->next = evenHead->next;
            oddHead = oddHead->next;
            evenHead->next = oddHead->next;
            evenHead = evenHead->next;
        }
        oddHead->next = even;
        return head;
    }
};