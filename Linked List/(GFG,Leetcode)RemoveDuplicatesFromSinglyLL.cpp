#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *insertend(Node *head,int x){
    Node *temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    Node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return (head);

}

Node *remdul(Node *head){
    Node *curr = head;
    while(curr != NULL && curr->next != NULL){
        if(curr->data == curr->next->data){
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}

void printL(Node *head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    printL(head->next);
}


int main(){
    Node *head = NULL;
    head = insertend(head,10);
    head = insertend(head,20);
    head = insertend(head,30);
    head = insertend(head,40);
    head = insertend(head,40);
    head = insertend(head,50);
    head = insertend(head,50);
    head = insertend(head,50);
    head = remdul(head);
    printL(head);
    return 0;
}