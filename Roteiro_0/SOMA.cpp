#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, s=0;

    cin >> m;

    for(int c=0; c<m; c++){
        cin >> n;
        s += n;
    }

    cout << s << "\n";

    return 0; 
}