
problem statement:-https://leetcode.com/problems/copy-list-with-random-pointer/
  
  
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        Node *curr=head, *temp;
        while(curr){
            temp=curr->next;
            curr->next=new Node(curr->val);
            curr->next->next=temp;
            curr=temp;
        }
        curr=head;
        while(curr){
            curr->next->random=curr->random?curr->random->next:curr->random;
            curr=curr->next->next;
        }
        Node *original=head, *copy=head->next;
        temp=copy;
        while(original && copy){
            original->next=original->next->next;
            copy->next=copy->next?copy->next->next:copy->next;
            original=original->next;
            copy=copy->next;
        }
        return temp;
    }
};
