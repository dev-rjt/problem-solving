#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        string s;
        cin>>n>>s;

        long long total=1LL*n*(n+1)/2;

        long long cnt[3]={1,0,0};
        long long bad1=0;
        int pref=0;

        for(char c:s){
            if(c=='0') pref++;
            else pref--;

            pref%=3;
            if(pref<0) pref+=3;

            bad1+=cnt[pref];
            cnt[pref]++;
        }

        long long bad2=0;
        int i=0;

        while(i<n){
            int j=i;

            while(j+1<n&&s[j]!=s[j+1]) j++;

            long long len=j-i+1;
            long long m=(len-1)/2;

            bad2+=m*len-m*(m+1);

            i=j+1;
        }

        cout<<total-bad1-bad2<<"\n";
    }

    return 0;
}