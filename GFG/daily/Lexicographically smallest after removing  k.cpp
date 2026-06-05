// 5 June 2026

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string lexicographicallySmallest(string &s, int k) {
        // code here
        int l = s.length();
        
        if(l&(l-1)){
            k+=k;
        }
        else{
           k/=2; 
        }
        
        if(k>=l) return "-1";
        
        stack<char> st;
        
        for(int i=0;i<l;i++){
            while(st.size() && s[i]<st.top() && k){
                st.pop();
                k--;
            }
            st.push(s[i]);
        }
        
        while(k--){
            st.pop();
        }
        
        string ans = "";
        
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};
