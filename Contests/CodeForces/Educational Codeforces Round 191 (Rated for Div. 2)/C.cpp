#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int n = s.length();

        vector<int> arr(n,0);
        vector<int> pre(n,0);
        vector<int> suff(n,0);

        for(int i=0;i<n;i++){
            if(s[i]=='(') arr[i] = 1;
            else arr[i] = -1;
        }

        int sum = 0;

        for(int i=0;i<n;i++){
            sum+=arr[i];
            pre[i] = sum;
        }

        sum = 0;
        for(int i=n-1;i>=0;i--){
            sum+=arr[i];
            suff[i] = sum;
        }

        int i=0;
        string ans = "";

        while(i<n && k){
            if(s[i]=='('){
                if(suff[i]<=0){
                    ans.push_back('1');
                    
                }
            }

            else{

            }
        }
    }
    
}