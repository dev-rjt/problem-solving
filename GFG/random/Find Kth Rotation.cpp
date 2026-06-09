#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int left = 0;
        int right = arr.size()-1;
        
        while(left<right){
            if(arr[right]>arr[left]){
                return left;
            }
            
            int mid = (left+right)/2;
            
            if(arr[mid]>arr[right]) left = mid+1;
            else right = mid;
        }
        
        return left;
    }
};
