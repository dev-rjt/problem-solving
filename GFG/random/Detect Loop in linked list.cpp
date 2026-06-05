#include <bits/stdc++.h>
using namespace std;


class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
    Node *first = head;
    Node *second = head;

    if(head==NULL) return false;

    while(second->next&& second->next->next ){
        second = second->next->next;
        if(second==first) return true;
        first = first->next;
    }
    return false;
    }
};