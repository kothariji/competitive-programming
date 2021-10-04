// 61. Given the head of a linked list, rotate the list to the right by k places.

// https://leetcode.com/problems/rotate-list/

// difficulty: medium

// Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]


// --- solution --- 

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
    public ListNode rotateRight(ListNode head, int k) {
        if (head != null) {

            int count = 1;
            ListNode tail = head;
            while (tail.next != null) {
                count++;
                tail = tail.next;

            }
            k = k % count;
            if (k == 0) {
                return head;
            }
            tail.next = head;
            ListNode newTail = tail;
            int length = count - k;
            while (length-- > 0) {
                newTail = newTail.next;
            }
            ListNode newHead = newTail.next;
            newTail.next = null;
            return newHead;
        }
        return head;
    }
}
