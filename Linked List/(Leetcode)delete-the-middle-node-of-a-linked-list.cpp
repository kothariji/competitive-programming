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
    ListNode* deleteMiddle(ListNode* head) {

             if(head->next==NULL) return NULL; // Edge case, only a single node in Linked List.

             ListNode *slowptr=head,*fastptr=head; // Initialize two variable to first node.
             ListNode* previous; // One variable to update the middle node.

             while(fastptr!=NULL && fastptr->next!=NULL){
                    previous = slowptr;
                    slowptr = slowptr->next;
                    fastptr = fastptr->next->next;
             }

             // slowptr moves one node , while fastptr moves 2 nodes in an iteration.
             // slowptr will reach middle node when fastptr reaches end of Linked List.

             previous->next = slowptr->next; // delete middle node.

             return head;
    }
};