#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, ans=1, att;
    cin >> n;

    vector<int> numero(n);

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        numero[x-1] = i;
    }

    att = 0;
    for(auto valor: numero){
        // cout << valor << " ";
        if(att > valor){
            ans++;
        }
        att = valor;
    }

    cout << ans << "\n";

    return 0;
}