//6 June 2026

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int numOfWays(int n, int m) {
        // code here
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int invalid = 1;
                int dx[] = {2,2,1,1,-1,-1,-2,-2};
                int dy[] = {1,-1,2,-2,2,-2,1,-1};
                
                for(int k=0;k<8;k++){
                    int x = i+dx[k];
                    int y = j+dy[k];
                    
                    if(x<n && x>=0 && y<m && y>=0) invalid++;
                }
                ans+=n*m-invalid;
            }
        }
        
        return ans;
    }
};