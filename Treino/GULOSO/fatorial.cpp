#include <bits/stdc++.h>

using namespace std;

int main() {
    int fat[11] = {1,2,6,24,120,720,5040,40320,362880};
    int n, ans=0;

    cin >> n;

    for(int c=8; c>=0; c--){
        while (fat[c]<=n){
            n -= fat[c];
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}