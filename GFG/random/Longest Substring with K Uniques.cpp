#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    int longestKSubstr(string &s, int k) {
        // code here
        int left = 0,ans=0,uniques =0;
        
        vector<int> freq(26,0);
        
        for(int right=0;right<s.length();right++){
            freq[s[right]-'a']++;
            
            if(freq[s[right]-'a']==1) uniques++;
            
            while(uniques>k){
                freq[s[left]-'a']--;
                if(freq[s[left]-'a']==0) uniques--;
                left++;
            }
            
            if(uniques==k){
                ans = max(ans,right-left+1);
            }
            
            // cout << left << " " << right << " " << ans << endl;
        }
        if(ans==0) return -1;
        return ans;
        
    }
};