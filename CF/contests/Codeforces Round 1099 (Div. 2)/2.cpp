#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        int maxdiff = 0;

        for(int i=0;i<n-1;i++){
            maxdiff = max(maxdiff,arr[i]-arr[i+1]);
        }

        for(int i=0;i<n-1;i++){
            if(arr[i+1]<arr[i]){
                arr[i+1]+=maxdiff;
            }
        }

        bool yes = true;

        for(int i=0;i<n-1;i++){
            if(arr[i+1]<arr[i]){
                cout << "No" << endl;
                yes = false;
                break;
            }
        }

        if(yes) cout << "Yes" << endl;

    }
}