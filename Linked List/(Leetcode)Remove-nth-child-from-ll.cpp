// 19. Remove Nth Node From End of List

// Difficulty: Medium

// Given the head of a linked list, remove the nth node from the end of the list and return its head.

// Example 1:

// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Example 2:

// Example 2:
// Input: head = [1], n = 1
// Output: []
// Example 3:

// Constraints:

// The number of nodes in the list is sz.
// 1 <= sz <= 30
// 0 <= Node.val <= 100
// 1 <= n <= sz

#include <bits/stdc++.h>

using namespace std;

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode*p=head;
        while(p){
            count++;
            p=p->next;
        }
        if (count==1){
            delete p;
            return NULL;
        }
        p=head;
        int i=count-n-1;
        if (n==count){
            head=head->next;
            delete p;
            return head;
        }
        while(i--){
            p=p->next;
        }
        ListNode*t=p->next;
        p->next=t->next;
        delete t;
        return head;
    }
};