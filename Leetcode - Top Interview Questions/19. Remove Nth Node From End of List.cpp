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
             
        int len=0;
        ListNode* temp = head;
        while(temp!=NULL){
             len++;
            temp = temp->next;
        }
        
        int idx=0;
        temp = head;
        if(n==len || len==1)
            head=head->next;
        else if(n==1){
            
            while(temp->next->next!=NULL)
                temp=temp->next;
            temp->next=NULL;
        }
        
        else{
           
            while(temp->next!=NULL && idx!=(len-n-1)){
                temp=temp->next;
                idx++;
            }
           
            temp->next = temp->next->next;
            
        }
        
        
        return head;
        
    }
};