// 2. Add Two Numbers

// https://leetcode.com/problems/add-two-numbers/

// difficulty: medium

// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

// Example 1:


// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.
// Example 2:

// Input: l1 = [0], l2 = [0]
// Output: [0]
// Example 3:

// Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
// Output: [8,9,9,9,0,0,0,1]
 

// Constraints:

// The number of nodes in each linked list is in the range [1, 100].
// 0 <= Node.val <= 9
// It is guaranteed that the list represents a number that does not have leading zeros.

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        queue<int> nums1,nums2,ans;
        while (l1){
            nums1.push(l1->val);
            l1=l1->next;
        }
        while (l2){
            nums2.push(l2->val);
            l2=l2->next;
        }
        int carry=0;  
        int mid=0;
        while( !nums1.empty()|| !nums2.empty()){
            if (!nums1.empty()&& !nums2.empty()){
                mid=nums1.front()+nums2.front()+carry;
                ans.push(mid%10);
                nums1.pop();
                nums2.pop();
                carry=mid/10;
            }
            else if (nums1.empty()){
                mid=nums2.front()+carry;
                ans.push(mid%10);
                nums2.pop();
                carry=mid/10;
            } 
            else {
                mid=nums1.front()+carry;
                ans.push(mid%10);
                nums1.pop();
                carry=mid/10;
            }
        }
        if (carry){
            ans.push(carry);
        }
        ListNode*p;
        ListNode*root=new ListNode;
        root->val=ans.front();
        root->next=NULL;
        ans.pop();
        p=root;
        p->next=NULL;
        while(!ans.empty()){
            //cout<<n.front();
            ListNode*t=new ListNode;
            t->val=ans.front();
            ans.pop();
            t->next=NULL;
            p->next=t;
            p=t;
            //delete t;
        }
        return root;
    }
};