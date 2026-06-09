#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMin(vector<int>& nums) {
        // code here
        int left = 0;
        int right = nums.size() - 1;

        while(left<right){
            if(nums[right]>nums[left]) return nums[left];

            int mid = (left+right)/2;

            if(nums[mid] > nums[right]) left = mid+1;

            else{
                right = mid;
            }
        }
        
        return nums[left];
    }
};