#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ans(4*n);

        if(n==2){
            cout << "1 2 1 2 2 1 1 2" << endl;
            continue;
        }

        queue<int> q;
        for(int i=0;i<n;i++) q.push(i+1);

        int i = 0;
        for(int j=0;j<n;j++){
            ans[i] = q.front();
            q.pop();
            q.push(ans[i]);
            i++;
        }
        for(int j=0;j<n;j++){
            ans[i] = q.front();
            q.pop();
            q.push(ans[i]);
            i++;
        }
        q.push(q.front());
        q.pop();

        for(int j=0;j<n;j++){
            ans[i] = q.front();
            q.pop();
            q.push(ans[i]);
            i++;
        }

        q.push(q.front());
        q.pop();
        q.push(q.front());
        q.pop();
        
        for(int j=0;j<n;j++){
            ans[i] = q.front();
            q.pop();
            q.push(ans[i]);
            i++;
        }

        for(int k=0;k<4*n;k++){
            cout << ans[k] << " ";
        }

        cout << endl;

        
    }
}