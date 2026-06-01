#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void solve(int n,int i,int j,vector<string> &ans,vector<vector<int>> &maze,string &output,vector<vector<int>> &vis) {
        if(maze[i][j]==0) return;
        
        if(i==n-1 && j==n-1) {
            ans.push_back(output);
            return;
        }
        
        vis[i][j] = 1;
        
        
        if(i<n-1 && maze[i+1][j]==1 && !vis[i+1][j]){
            output.push_back('D');
            solve(n,i+1,j,ans,maze,output,vis);
            output.pop_back();
        }
        if(j>0 && maze[i][j-1]==1 && !vis[i][j-1]) {
            output.push_back('L');
            solve(n,i,j-1,ans,maze,output,vis);
            output.pop_back();
        }
        
        if(j<n-1 && maze[i][j+1]==1 && !vis[i][j+1]) {
            output.push_back('R');
            solve(n,i,j+1,ans,maze,output,vis);
            output.pop_back();
        }
        
        if(i>0 && maze[i-1][j]==1 && !vis[i-1][j]) {
            output.push_back('U');
            solve(n,i-1,j,ans,maze,output,vis);
            output.pop_back();
        }
        
        
        vis[i][j] = 0;
    }
    
    
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;
        string output;
        int n = maze.size();
        vector<vector<int>> vis(n, vector<int>(n, 0));
        
        if(n==0 || maze[0][0]==0) return ans;
        
        solve(n,0,0,ans,maze,output,vis);
        return ans;
        
        
    }
};