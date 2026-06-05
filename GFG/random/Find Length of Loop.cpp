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
    int lengthOfLoop(Node *head) {
        // code here
        Node *first = head;
        Node *second = head;

        if(head==NULL) return 0;

        bool possible = false;

        while(second->next&& second->next->next ){
            first = first->next;
            second = second->next->next;
            if(first==second){
                possible = true;
                break;
            }   
        }

        if(!possible) return 0;

        first = head;
        while(first!=second){
            first = first->next;
            second = second->next;
        }
        
        int ans = 1;
        Node* temp = first->next;
        
        while(temp!=first){
            ans++;
            temp = temp ->next;
        }
        
        return ans;
    }
};