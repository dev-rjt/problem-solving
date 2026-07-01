#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& nums) {
        // code here
        int n = nums.size();
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);

        for(int i=nums.size()-1;i>=0;i--){
            while(st.top()!=-1 && st.top()<=nums[i]) st.pop();

           ans[i] = st.top();

            st.push(nums[i]);
        }

        return ans;
    }
};