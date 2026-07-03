//31 May 2026

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isSumOfConsecutive(int n) {
        // code here
        if(n==1) return false;
        
        if((n&(n-1))==0) return false; 
        
        return true;
    }
};