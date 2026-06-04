// 4 June 2026

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubstring(string &s) {
        // code here
        int curr_sum = 0;
        int max_sum = -1;
        
       
        for(int i=0;i<s.length();i++){
            
            if(s[i] == '1'){
                curr_sum -= 1;
            }
            else{
                curr_sum += 1;
            }
            if(curr_sum<0) curr_sum = 0;
            max_sum = max(max_sum,curr_sum);
        }
        if(max_sum==0) return -1;
        return max_sum;
    }
};