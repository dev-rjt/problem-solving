#include <bits/stdc++.h>
using namespace std;    

long long minswaps(vector<int>& arr) {
    long long swaps = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j])
                swaps++;
        }
    }

    return swaps;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];

        vector<int> c(n);

        bool possible = true;

        for(int i=0;i<n;i++){
            bool change = false;
            for(int j=0;j<n;j++){
                if(a[j]<=b[i]){
                    c[j] = b[i];
                    a[j] = INT_MAX;
                    change = true;
                    break;
                }
            }
            if(!change){
                possible = false;
                break;
            }
        }
        if(!possible){
            cout << -1 << endl;
        }
        else{
        
            cout << minswaps(c) << endl;
        }
    }
}