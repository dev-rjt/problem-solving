//11 June 2026

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findIndex(string &s) {
        // code here
        int n = s.length();
        int opencnt = 0;
        int closecnt = 0;
       
        for(int i=0;i<s.length();i++){
            if(s[i]==')') closecnt++;
        }
       
        for(int i=0;i<=n;i++){
            if(opencnt==closecnt) return i;
           
            if(i<n){
               if(s[i]=='(') opencnt++;
                else closecnt--;
            }
       }
       
       return -1;
    }
};