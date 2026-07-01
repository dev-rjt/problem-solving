#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        queue<char> q;
        int ans = 0;
        unordered_map<char,int> freq;

        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
            q.push(s[i]); 
            if(freq[s[i]]==1){
                ans = max(ans,(int)q.size());
            }
            else{
                while(freq[s[i]]!=1){
                    freq[q.front()]--;
                    q.pop();
                }
            }
        }
        return ans;
    }
};
