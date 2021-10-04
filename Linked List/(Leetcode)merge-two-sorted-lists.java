// 21. Merge two sorted linked lists

// https://leetcode.com/problems/merge-two-sorted-lists/

//Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

// Input: l1 = [1,2,4], l2 = [1,3,4]
// Output: [1,1,2,3,4,4]

// ---- Solution ----- 
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode head = new ListNode();
        ListNode p = head;

        ListNode n1 = l1;
        ListNode n2 = l2;

        while (n1 != null && n2 != null) {
            if (n1.val > n2.val) {
                p.next = n2;
                n2 = n2.next;
                
            } else {
                p.next = n1;
                n1 = n1.next;
            }
            p = p.next;
        }

        if (n1 != null) {
            p.next = n1;
        }

        if (n2 != null) {
            p.next = n2;
        }

        return head.next;
    }
}
