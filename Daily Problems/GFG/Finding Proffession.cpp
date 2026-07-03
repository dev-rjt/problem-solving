//7 June 2026

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSetBits(int n)
    {
        int count = 0;
        while (n)
        {
            n &= (n-1);
            count++;
        }
        return count;
    }
    
    string profession(int level, int pos) {
        // code here
         int c = countSetBits(pos-1);
            return (c % 2) ? "Doctor" : "Engineer";
    }
};