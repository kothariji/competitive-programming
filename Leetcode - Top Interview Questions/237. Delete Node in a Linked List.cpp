class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        ListNode *temp = node;
        while (temp->next)
        {
            temp->val = temp->next->val;
            if (!temp->next->next)
            {
                temp->next = NULL;
                break;
            }
            temp = temp->next;
        }
        temp = NULL;
    }
};