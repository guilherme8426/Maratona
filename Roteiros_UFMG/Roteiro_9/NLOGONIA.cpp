#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, m, x, y;

    while (1){
        cin >> k;

        if(k == 0) break;

        cin >> n >> m;

        while(k--){
            cin >> x >> y;

            if(x==n || y==m) cout << "divisa\n";
            if(x<n && y>m) cout << "NO\n";
            if(x>n && y>m) cout << "NE\n";
            if(x>n && y<m) cout << "SE\n";
            if(x<n && y<m) cout << "SO\n";

        }
    }

    return 0;
}