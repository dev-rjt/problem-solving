// 12 June 2026

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool kSubstr(string &s, int k) {
        // code here
        if(s.length()%k!=0) return false;
        
        vector<string> ans;
        unordered_map<string,int> freq;
        
        for(int i=0;i<s.length();i+=k){
            string res = "";
            for(int j=0;j<k;j++){
                res.push_back(s[i+j]);
            }
            freq[res]+=1;
            if(freq[res]==1) ans.push_back(res);
        }
        
        if(ans.size()>2) return false;
        else if(ans.size()==2){
            if(freq[ans[0]]==1 || freq[ans[1]]==1) return true;
            return false;
        }
        return true;
        
    }
};