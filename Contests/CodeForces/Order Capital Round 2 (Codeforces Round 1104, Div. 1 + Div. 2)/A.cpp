#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        for(int i=0;i<n;i++){
            int first = a[i];
            for(int j=i+1;j<n;j++){
                if(a[j]>first){
                   a[j] = a[i];
                }
            }
        }

        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        cout << sum << endl;
    }
}