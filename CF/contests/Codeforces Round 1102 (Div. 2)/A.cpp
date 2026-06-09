#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        int x = arr[0];
        int y = arr[1];

        bool is_ok = true;

        for(int i=2;i<n;i++){
            if(arr[i]!=(arr[i-2]%arr[i-1])){
                is_ok = false;
                break;
            }
        }

        if(is_ok){
            cout << x << " " << y << endl;
        }
        else cout << "-1" << endl;
        
    }
    
}