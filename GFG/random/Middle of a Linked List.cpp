#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }

}; 

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node* x = head;
        Node* y = head;

        while(x!=NULL && x->next!=NULL){
            x = x->next->next;
            y = y->next;
        }

        return y->data;
    }
};