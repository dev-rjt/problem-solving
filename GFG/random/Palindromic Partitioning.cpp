#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution {
  public:
  
    int solve(string &s,int n,unordered_map <int,list<int>> &pal,int i,vector<int> &dp){
        if(i>=n) return 0;
        
        if(dp[i]!=-1) return dp[i];
        
        int res = INT_MAX;
        
        for(auto it: pal[i]){
            // cout << i << " " <<  it << endl;
            res = min(1+solve(s,n,pal,it+1,dp),res);
        }
        dp[i] = res;
        return res;
    }
    int palPartition(string &s) {
        // code here
        unordered_map <int,list<int>> pal;
        int n = s.length();
        
        vector<int> dp(n,-1);
        
        for(int i=0;i<n;i++){
            int center = i;
            int l = center;
            int r = center;
            
            while(l>=0 && r<n && s[l]==s[r]){
                pal[l].push_back(r);
                l--;
                r++;
            }
        }
        
        for(int i=0;i<n;i++){
            int center = i;
            int l = center;
            int r = center+1;
            
            while(l>=0 && r<n && s[l]==s[r]){
                pal[l].push_back(r);
                l--;
                r++;
            }
        }
        
        return solve(s,n,pal,0,dp)-1;
        
    }
};