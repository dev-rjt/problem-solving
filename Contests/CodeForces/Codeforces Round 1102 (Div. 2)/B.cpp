#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        if(n<=12){
            if(n==10) cout << "-1" << endl;
            else if(n==12) cout << "0" << " " << "12" << endl;
            else{
                cout << n << " " << "0" << endl;
            }
        }

        else{
            int mod = n%12;

            if(mod!=10){
                cout << mod << " " << n-mod << endl; 
            }
            else{
                cout << "22" << " " << n-(long long)22 << endl;
            }
        }

    }
}