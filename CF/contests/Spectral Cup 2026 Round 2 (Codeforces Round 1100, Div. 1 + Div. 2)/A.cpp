#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int med = 0;
        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin >> arr[i];
            
        }

        sort(arr.begin(),arr.end());

        med = (arr[0]+arr[n-1])/2;
       

        int ans = 0;

        ans = max(med-arr[0],arr[n-1]-med);

        cout << ans << endl;

    }
}
