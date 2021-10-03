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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int len(ListNode *head)
    {
        ListNode *temp = head;
        int counts = 0;
        while (temp)
        {
            counts++;
            temp = temp->next;
        }
        return counts;
    }

    int val(ListNode *head, int idx)
    {
        ListNode *temp = head;
        int counts = 0;
        while (temp)
        {
            if (counts == idx)
                return temp->val;
            counts++;
            temp = temp->next;
        }
        return 0;
    }

    ListNode *getNode(ListNode *head, int idx)
    {
        ListNode *temp = head;
        int counts = 0;
        while (temp)
        {
            if (counts == idx)
                return temp;
            counts++;
            temp = temp->next;
        }
        return nullptr;
    }

    TreeNode *sortedListToBST(ListNode *head)
    {
        if (head == NULL)
            return nullptr;
        if (len(head) == 1)
            return new TreeNode(head->val);
        int mid = len(head) / 2;
        TreeNode *temp = new TreeNode(val(head, mid));
        ListNode *RNode = getNode(head, mid + 1);
        ListNode *LNode = getNode(head, mid - 1);
        if (LNode)
            LNode->next = nullptr;
        temp->left = sortedListToBST(head);
        temp->right = sortedListToBST(RNode);
        return temp;
    }
};