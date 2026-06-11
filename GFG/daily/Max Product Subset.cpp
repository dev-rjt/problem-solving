//1 June 2026

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMaxProduct(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        if(n==1) return arr[0];
        
        int zerocnt = 0;
        int negcnt = 0;
        int maxnegindex = -1;
        int maxneg = INT_MIN;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0) zerocnt++;
            if(arr[i]<0){
                negcnt++;
                if(maxnegindex==-1 || arr[i]>maxneg){
                    maxnegindex = i;
                    maxneg = arr[i];
                }
            }
        }
        
        if(zerocnt==n) return 0;
        if(zerocnt==n-1  && negcnt==1) return 0;
        
        long long ans = 1;
        int mod = 1e9+7;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0) continue;
            
            if(negcnt%2==1 && i==maxnegindex) continue;
            
            ans = (ans*arr[i])%mod;
        }
        
        return ans;
    }
};
