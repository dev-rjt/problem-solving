#include <bits/stdc++.h>
using namespace std;



struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};



// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        if(head==NULL || head->next==NULL) return NULL;

        Node* temp = new Node(1);
        temp->next = head;
        Node* ptr = head;

        while(ptr && ptr->next){
            ptr = ptr->next->next;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};