//https://codeforces.com/problemset/problem/1301/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sz, aux;
    string a, b, c;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a >> b >> c;

        aux = 1;
        sz = a.size();
        for(int j=0; j<sz; j++){
            if((a[j]!=c[j])&&(b[j]!=c[j])){
                
                aux = 0;
                cout << "NO\n";
                break;
            }
        }
        if(aux) cout << "YES\n";
    }

    return 0;
}