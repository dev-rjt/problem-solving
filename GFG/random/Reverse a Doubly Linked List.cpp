#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};


class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node* last = head;
        int len = 1;
        
        while(last->next){
            last = last->next;
            len++;
        }
        
        Node* first = head;
        
        int i = 0;
        
        while(i<len/2){
            swap(first->data,last->data);
            first = first->next;
            last = last->prev;
            i++;
        }
        
        return head;
    }
};