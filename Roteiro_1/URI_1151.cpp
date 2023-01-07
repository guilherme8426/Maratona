#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, f[46];

    cin >> n;

    if(n>=1){
        cout << 0 << ' ';
        f[0] = 0;
    }

    if(n>=2){
        cout << 1 << ' ';
        f[1] = 1;
    }

    for(int c=2; c<n; c++){
        f[c] = f[c-1] + f[c-2];
        cout << f[c];
        if(c!=n-1) cout << " ";
        else cout << '\n';
    }

    return 0;
}