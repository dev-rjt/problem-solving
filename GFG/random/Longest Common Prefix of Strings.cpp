#include <bits/stdc++.h>
using namespace std;    

// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string ans= "";

        for(int i=0;i<arr[0].size();i++){
            char ch = arr[0][i];
            int common = 0;

            for(int j=0;j<arr.size();j++){
                if(arr[j][i]==ch) common++;
                else break;
            }

            if(common == arr.size()) ans.push_back(ch);
            else break;
        }

        return ans;
    }
};