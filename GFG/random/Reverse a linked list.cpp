#include <bits/stdc++.h>
using namespace std;


class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};


class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
    Node *prev = NULL,*curr = head,*upcoming=NULL;

    while(curr){
        upcoming = curr->next;
        curr->next = prev;
        prev = curr;
        curr = upcoming;
    }
    return prev;
    }
};