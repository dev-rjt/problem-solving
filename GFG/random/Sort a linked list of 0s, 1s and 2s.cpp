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
    Node* segregate(Node* head) {
        // code here
        int zero = 0;
        int one = 0;
        int two = 0;
        
        Node* temp = head;
        while(temp){
            if(temp->data==0) zero++;
            else if(temp->data==1) one++;
            else two++;
            temp = temp->next;
        }
        
        temp = head;
        while(zero && temp){
            temp->data = 0;
            zero--;
            temp = temp->next;
        }
        
        while(one && temp){
            temp->data = 1;
            one--;
            temp = temp->next;
        }
        
        while(two && temp){
            temp->data = 2;
            two--;
            temp = temp->next;
        }
        
        return head;
    }
};