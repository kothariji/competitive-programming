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
    ListNode* reverse(ListNode *head){
        ListNode *cur=head,*temp=NULL, *x;
        while(cur) 
{
            x=cur->next;
            cur->next=temp;
            temp=cur;
            cur=x;

        } 
        return temp;
    } 
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *t1=head,*t2=head,*start=t1,*end=t1;
        int a=m, b=n;
        if(m==n)return head;
        while(m-->1){
            start=t1;
            t1=t1->next;
            
        }
        while(n>1){
            t2=t2->next;
            n--;
        }
        end=t2->next;
        t2->next=NULL;
        if(a==1){
            head=reverse(head);
            
        }
        else start->next=reverse(t1) ;
        t1->next=end;
        return head;
    }
};