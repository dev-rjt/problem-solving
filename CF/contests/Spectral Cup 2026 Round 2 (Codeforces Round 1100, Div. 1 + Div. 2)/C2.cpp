// not solved yet

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> ops;
        vector <int> pton;
        vector<int> ntop;

        for (int i = 0; i < n - 1; i++) {
            if ((a[i] > 0) && (a[i + 1] < 0)) {
                pton.push_back(i + 1);
            }

            else if((a[i] < 0) && (a[i + 1] > 0)){
                ntop.push_back(i+1);
            }
        }

        if (a[n - 1] < 0) {
            ntop.push_back(n);
        }

        sort(pton.begin(),pton.end());
        sort(ntop.begin(),ntop.end());

        int i = 0;
        int j = 0;

        
        while(i<pton.size()){

            int index = pton[i++];

            ops.push_back(index);

            while(ntop[j]<index && j<ntop.size()){
                ops.push_back(ntop[j]);
                j++;
            }
        }

        cout << ops.size() << '\n';


        for (int x : ops) {
            cout << x << ' ';
        }

        cout << '\n';
    }
}
