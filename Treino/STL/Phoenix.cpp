#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, n, k, a;
    cin >> t;

    while(t--){
        cin >> n >> k;

        vector<int> seq(k, 1);
        unordered_set<int> let; 
        for(int i=0; i < n; i++){
            cin >> a;
            let.insert(a);
        }

        if(let.size() > k){cout << -1 << "\n"; continue;}

        int i=0;
        for(auto num: let) seq[i++] = num;

        cout << k*n << "\n";
        while (n--){
            for(auto c: seq){
                cout << c << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}