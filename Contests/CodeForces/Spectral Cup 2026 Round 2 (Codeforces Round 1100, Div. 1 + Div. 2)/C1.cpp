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

        for (int i = 0; i < n - 1; i++) {
            if ((a[i] > 0) != (a[i + 1] > 0)) {
                ops.push_back(i + 1);
            }
        }

        if (a[n - 1] > 0) {
            ops.push_back(n);
        }

        reverse(ops.begin(), ops.end());

        cout << ops.size() << '\n';


        for (int x : ops) {
            cout << x << ' ';
        }

        cout << '\n';
    }
}
