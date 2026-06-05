#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    struct ListNode *next;
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    
        ListNode *first = head;
        ListNode *second = head;

        if(head==NULL) return NULL;

        bool possible = false;

        while(second->next&& second->next->next ){
            first = first->next;
            second = second->next->next;
            if(first==second){
                possible = true;
                break;
            }   
        }

        cout << second->val << endl;
        if(!possible) return NULL;

        first = head;
        while(first!=second){
            first = first->next;
            second = second->next;
        }
        return first;
    }
};