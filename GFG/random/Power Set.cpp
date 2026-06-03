#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    void solve(string s,int i,string res,vector<string> &ans){
        if(i>=s.length()){
            ans.push_back(res);
            return;
        };

        solve(s,i+1,res,ans);

        res.push_back(s[i]);
        
        solve(s,i+1,res,ans);
        
        res.pop_back();
    }
    vector<string> AllPossibleStrings(string s) {
        // Code here
        vector<string> ans;
        solve(s,0,"",ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};