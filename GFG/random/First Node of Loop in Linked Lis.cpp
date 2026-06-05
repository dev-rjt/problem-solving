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
    int cycleStart(Node* head) {
        // code here
        Node *first = head;
        Node *second = head;

        if(head==NULL) return -1;

        bool possible = false;

        while(second->next&& second->next->next ){
            first = first->next;
            second = second->next->next;
            if(first==second){
                possible = true;
                break;
            }   
        }

        if(!possible) return -1;

        first = head;
        while(first!=second){
            first = first->next;
            second = second->next;
        }
        return first->data;
    }
};