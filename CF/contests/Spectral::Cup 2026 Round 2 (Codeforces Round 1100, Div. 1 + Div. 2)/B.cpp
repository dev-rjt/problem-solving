#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];

        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                swap(a[i],b[i]);
            }
        }

        long long sum = 0;
        int maxi = 0;

        for(int i=0;i<n;i++){
            sum+=b[i];
            maxi = max(a[i],maxi);
        }

        long long ans = sum + maxi;

        cout << ans << endl;

        
    }
}