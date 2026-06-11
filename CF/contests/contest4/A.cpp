#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ,x,y,z;
        cin >> n >> x >> y >> z;

        int ans1 = 0;
        int temp = n;
        while(temp>0){
            temp-=(x+y);
            ans1+=1;
        }

        int ans2= 0;
        temp = n;

        if(temp>x*z){
            ans2+=z;
            temp-=x*z;

            while(temp>0){
                temp-=(x+10*y);
                ans2+=1;
            }
        }
        else{
            while(temp>0){
                temp-=(x);
                ans2+=1;
            }
        }

        cout << min(ans1,ans2) << endl;
    }
}