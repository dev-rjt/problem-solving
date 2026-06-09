#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPossible(vector<int> &stalls,int k,int dist){
        int i = 0;
        int j = 1;
        
        while(j<stalls.size() && k>1){
            if(stalls[j]-stalls[i]>=dist){
                i=j;
                j++;
                k--;
            }
            else{
                j++;
            }
        }
        
        if(k==1) return true;
        return false;
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int n = stalls.size();
        int low = 1;
        int high = stalls[n-1]-stalls[0];
        
        int ans = 0;
        
        while(low<=high){
            int mid = (low+high)/2;
            
            if(isPossible(stalls,k,mid)){
                ans = mid;
                low = mid+1;
            }
            
            else high = mid-1;
        }
        
        return ans;
    }
};