//9 June 2026

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canSeatAllPeople(int k, vector<int> &seats) {
        // code here
        int res = 0;
        int ans = 0;
        
        for(int i=0;i<seats.size();i++){
            bool possible = true;
            
            if(i+1<seats.size() && seats[i]==1 && seats[i+1]==1) return false;
            if(seats[i]==1 || i-1>=0 && seats[i-1]==1 || i+1<seats.size() && seats[i+1]==1){
                possible = false;
            }
            
            if(possible) res+=1;
            
            else{
                if(res%2){
                    ans+=res/2+1;
                }
                else{
                    ans+=res/2;
                }
                res=0;
            }
           
        }
        
        if(res%2){
            ans+=res/2+1;
        }
        else{
            ans+=res/2;
        }
        
        if(ans>=k) return true;
        return false;
    }
};