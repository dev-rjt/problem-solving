//10 June 2026

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int solve(vector<int> &arr,int l,int r,int lr,int rr){
        
        if(l>r) return 0;
        
        int mid = (l+r)/2;
        
        if(arr[mid]>=lr && arr[mid]<=rr){
            return 1 + solve(arr,l,mid-1,lr,min(rr,arr[mid])) 
            + solve(arr,mid+1,r,max(lr,arr[mid]),rr);
        }
        else{
            return 0 + solve(arr,l,mid-1,lr,min(rr,arr[mid])) 
            + solve(arr,mid+1,r,max(lr,arr[mid]),rr);
        }
            
    }
    int binarySearchable(vector<int>& arr) {
        // code here
        return solve(arr,0,arr.size()-1,INT_MIN,INT_MAX);
    }
};