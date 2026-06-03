#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    bool solve(vector<int> arr,int k,int i,vector<vector<int>> &dp){
        if(k==0) return true;
        if(k<0) return false;
        if(i>=arr.size()) return false;
        
        if(dp[i][k]!=-1) return dp[i][k];
        
         return dp[i][k] = solve(arr,k,i+1,dp) || solve(arr,k-arr[i],i+1,dp);
    }
    bool checkSubsequenceSum(vector<int>& arr, int k) {
        // Code here
        vector<vector<int>> dp(arr.size(),vector<int>(k+1,-1));
        
        return solve(arr,k,0,dp);
    }
};