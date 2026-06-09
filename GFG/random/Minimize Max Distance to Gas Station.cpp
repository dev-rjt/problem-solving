#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPossible(vector<int> &stations,int k,double dist,int n){
        int i = 0;
        int cnt = 0;
        
        while(cnt<=k && i<n-1){
            if((double)(stations[i+1]-stations[i])<=dist) i++;
            else{
                double a = (double)(stations[i+1]-stations[i]);
                cnt+= ceil(a/dist)-1;
                i++;
            }
            
        }
        
        if(cnt>k) return false;
        return true;
    }
    double minMaxDist(vector<int> &stations, int K) {
        // Code here
        int n = stations.size();
        double low = 0;
        double high = stations[n-1]-stations[0];
        double ans = 0;
        
        while(high - low > 1e-6){
            double mid = (double)(low+high)/2;
            
            if(isPossible(stations,K,mid,n)){
                high = mid;
                ans = mid;
            }
            else low = mid;
        }
        return ans;
    }
};