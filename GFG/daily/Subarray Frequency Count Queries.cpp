// 3 June 2026

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> freqInRange(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        int n = arr.size();
        vector<vector<int>> nums(n,vector<int>(2));
        
        for(int i=0;i<n;i++){
            nums[i][0] = arr[i];
            nums[i][1] = i;
        }
        
        sort(nums.begin(),nums.end());
        
        // for(int i=0;i<n;i++){
        //     cout << nums[i][0] << " " << nums[i][1] << endl;
        // }
        
        // cout << "a " << endl;
        
        
        vector<int> ans;
        
        for(int i=0;i<queries.size();i++){
            int l = queries[i][0];
            int r = queries[i][1];
            int target = queries[i][2];
            
            int low = 0;
            int high = n-1;
            
            int ans1 = n;
            int ans2 = -1;
            
            while(low<=high){
                int mid = (low+high)/2;
                
                if(nums[mid][0]==target){
                    if(nums[mid][1]<=r && nums[mid][1]>=l){
                        ans1 = mid;
                        high = mid-1;
                    }
                    else if(nums[mid][1]>r){
                        high = mid-1;
                    }
                    else{
                        low = mid+1;
                    }
                }
                
                else if(nums[mid][0]>target){
                    high = mid-1;
                }
                
                else{
                    low = mid+1;
                }
            }
            
            // cout << ans1 << endl;
            // cout << "b" << endl;
            
            low = 0;
            high = n-1;
            
            while(low<=high){
                int mid = (low+high)/2;
                
                if(nums[mid][0]==target){
                    if(nums[mid][1]<=r && nums[mid][1]>=l){
                        ans2 = mid;
                        low= mid+1;
                    }
                    else if(nums[mid][1]>r){
                        high = mid-1;
                    }
                    else{
                        low = mid+1;
                    }
                }
                
                else if(nums[mid][0]>target){
                    high = mid-1;
                }
                
                else{
                    low = mid+1;
                }
            }
            
            // cout << ans2 << endl;
            // cout << "c" << endl;
            
            if(ans1!=n && ans2!=-1) ans.push_back(ans2-ans1+1);
            else ans.push_back(0);
        }
        return ans;
    }
};