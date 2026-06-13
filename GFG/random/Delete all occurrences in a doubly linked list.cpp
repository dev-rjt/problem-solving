#include <bits/stdc++.h>    
using namespace std;   


class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};


class Solution {
  public:

    // Function to delete a specified node from the linked list
    Node* deleteAllOccurOfX(Node* head, int x) {

        // code here
        while(head && head->data==x){
            head = head->next;
            if(head) head->prev = NULL;
        }
        
        Node* temp = head;
        
        while(temp && temp->next){
            if(temp->next->data==x){
                temp->next = temp->next->next;
                if(temp->next) temp->next->prev = temp;
            }
            else{
                temp = temp->next;
            }
        }
        
        return head;
    }
}; 