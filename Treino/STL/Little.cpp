//https://codeforces.com/contest/1333/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, m;
    cin >> t;

    for(int a=0; a<t; a++){
        cin >> n >> m;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==0 && j==0)    cout << 'W';
                else cout << 'B';
            }
            cout << '\n';
        }
    }

    return 0;
}