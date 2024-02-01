//https://codeforces.com/contest/1339/problem/B
#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> num){
    int sz=num.size(), max=sz-1, min=0, par=1, aux;
    int ans[sz];

    sort(num.begin(), num.end());

    aux = sz-1;
    for(aux; aux>=0; aux--){
        if(par){
            par = 0;
            ans[aux] = num[max];
            max--;
        }
        else{
            par = 1;
            ans[aux] = num[min];
            min++;
        }
    }
    
    for(int i=0; i<sz; i++){
        cout << ans[i] << ' ';
    }
    cout << '\n';
}

int main() {
    int t, n, aux;
    cin >> t;

    for(int i=0; i<t; i++){
        vector<int> num;
        cin >> n;

        for(int j=0; j<n; j++){
            cin >> aux;
            num.insert(num.end(),aux);
        }

        solve(num);
    }

    return 0;
}