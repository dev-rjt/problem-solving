#include <bits/stdc++.h>
using namespace std;


class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};


class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        Node* i = head;
        Node* temp = head;
        
        while(temp->next!=NULL){
            temp = temp->next;
        }
        
        vector<pair<int,int>> ans;
        
        while(i!=temp && temp->next!=i){
            if(i->data + temp->data == target){
                ans.push_back({i->data,temp->data});
                i = i->next;
                temp = temp->prev;
            }
            
            else if(i->data + temp->data < target) i = i->next;
            else temp = temp->prev;
        }
        
        return ans;
    }
};