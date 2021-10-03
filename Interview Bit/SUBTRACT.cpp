/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::subtract(ListNode* A) {
    if(A->next==NULL)
        return A;
    ListNode* fp=A->next;
    ListNode* sp=A;
    ListNode* p=A;
    stack<int> s;
    while(fp!=NULL && fp->next!=NULL){
        fp=fp->next->next;
        sp=sp->next;
    }
    while(sp->next!=NULL){
        s.push(sp->next->val);
        sp=sp->next;
    }
    while(!s.empty()){
        p->val=s.top()-(p->val);
        s.pop();
        p=p->next;
    }
    return A;
}
