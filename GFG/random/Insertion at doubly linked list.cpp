#include <bits/stdc++.h>
using namespace std;


class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};


class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
        Node* previous = head;
        
        
        while(p--){
            previous = previous->next;
        }
        
        Node* temp = new Node(x);
        temp->prev = previous;
        temp->next = previous->next;
        if (previous->next) previous->next->prev = temp;
        previous->next = temp;
        
        return head;
    }
};