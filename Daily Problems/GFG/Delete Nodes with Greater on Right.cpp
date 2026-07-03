//8 June 2026

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
  public:
    Node *compute(Node *head) {
        // code here
        if(head==NULL || head->next==NULL) return head;
        
        Node* prev = NULL;
        Node* curr = head;
        Node* upcoming = NULL;
        
        while(curr){
            upcoming = curr->next;
            curr->next = prev;
            prev = curr;
            curr = upcoming;
        }
        
        Node* currNode=prev,*maxNode = prev;
        
        // return prev;
        
        while(currNode && currNode->next){
            if(currNode->next->data<maxNode->data){
                currNode->next = currNode->next->next;
            }
            else{
              maxNode = currNode->next;
              currNode = currNode->next;
            }
        }
        
        Node* p = NULL;
        Node* c = prev;
        Node* u = NULL;
        
        while(c){
            u = c->next;
            c->next = p;
            p = c;
            c = u;
        }
        
        return p;
        
    }
};