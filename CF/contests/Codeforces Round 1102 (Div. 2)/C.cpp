#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n,0);

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        vector<long long> ans(n,0);

        for(int i=0;i<n;i++){
            vector<int> water(n,0);

            for(int j=0;j<n-1;j++){
                water[(i+j+1)%n] = max(water[(i+j)%n],arr[(i+j)%n]);
            }

            for(int j=0;j<n-1;j++){
                water[(n+i-j-1)%n] = min(water[(n+i-j-1)%n],max(water[(n+i-j)%n],arr[(n+i-j-1)%n]));
            }
            long long sum = 0;

            for(int j=0;j<n;j++) sum+=water[j];

            ans[i] = sum;

        }

        for(int i=0;i<n;i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}