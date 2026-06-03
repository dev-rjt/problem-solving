#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<int> &arr,int k,int i,vector<int> poss,vector<vector<int>> &ans){

        if(k==0){
            ans.push_back(poss);
            return;
        }

        if(k<0 || i>=arr.size()) return;

        solve(arr,k,i+1,poss,ans);
        
        poss.push_back(arr[i]);
        solve(arr,k-arr[i],i,poss,ans);
        poss.pop_back();

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;

        solve(candidates,target,0,{},ans);
        return ans;
    }
};