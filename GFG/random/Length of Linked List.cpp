#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        int ans = 0;
        while(head){
            ans+=1;
            head = head->next;
        }
        return ans;
    }
};