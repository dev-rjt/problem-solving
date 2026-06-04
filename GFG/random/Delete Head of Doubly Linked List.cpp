#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};

Node *deleteHead(Node *head) {
    // Your code here
    Node* temp = head->next;
    head->next = NULL;
    free(head);
    temp->prev = NULL;
    head = temp;
    return head;
}
