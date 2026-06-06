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
    bool isPalindrome(Node *head) {
        //  code here
        if(head->next==NULL) return true;

       Node* slow = head,*fast = head;

       while(fast && fast->next){
           slow = slow->next;
           fast = fast->next->next; 
       }

       Node *prev = NULL,*curr = slow,*upcoming = NULL;

       while(curr){
            upcoming = curr->next;
            curr->next = prev;
            prev = curr;
            curr = upcoming;
       }

        while(prev){
            if(prev->data!=head->data){
                return false;
            }
            prev = prev->next;
            head = head->next;
        }
        return true;
    }
};