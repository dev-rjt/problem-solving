// 2 June 2026

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int sumDiffPairs(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        
        int i=0;int j=1;
        
        int sum = 0;
        
        while(i<arr.size() && j<arr.size()){
            while(i<arr.size() && arr[i]==0) i++;
            while(j<arr.size() && arr[j]==0) j++;
            
            if(i==j) j++;
            
            if(i>=arr.size() || j>=arr.size()) break;
            
            if(arr[i]-arr[j]<k){
                sum += arr[i] + arr[j];
                arr[i]=0;
                arr[j] = 0;
            }
            
            else{
                i++;
            }
        }
        
        return sum;
    }
};