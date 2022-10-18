#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void addnew(struct node **head, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    if(*head == NULL)
        *head = newNode;
    else
    {
        struct node *lastNode = *head;
        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
}

void printlinkedlist(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head = NULL;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n+1; i++)
    {
        int x;
        scanf("%d", &x);
        addnew(&head, x);
    }

    printlinkedlist(head);

    return 0;
}
