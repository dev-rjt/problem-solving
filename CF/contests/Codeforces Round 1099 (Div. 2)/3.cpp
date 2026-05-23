// not solved yet //

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);

        
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        unordered_map <int,int> freq;
        unordered_map <int,int> operations;

        queue <int> poss;
        
        for(int i=0;i<n;i++){
            int oper = 0;
            freq[arr[i]] += 1;
            operations[arr[i]] += oper;

            if(freq[arr[i]]==n){
                poss.push(arr[i]);
            }

            while(arr[i]!=1){
                if(arr[i]%2){
                    arr[i] +=1;
                    oper+=1;
                }
                else{
                    arr[i]/=2;
                    oper+=1;
                }

                freq[arr[i]] +=1;
                operations[arr[i]] += oper;
                if(freq[arr[i]]==n){
                    poss.push(arr[i]);
                }

            }
    
        }
        // cout << operations[10] << endl;

        int ans = INT_MAX;

        while(poss.size()){
            // cout << poss.front() << endl;
            ans = min(ans,operations[poss.front()]);
            poss.pop();
        }

        cout << ans << endl;
    }
}