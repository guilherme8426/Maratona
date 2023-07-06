#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, n, resp;
    char a;
    cin >> n >> x >> a >> y;

    if(a == '+') resp = x+y;
    else resp = x*y;

    if(resp <= n) cout << "OK\n";
    else cout << "OVERFLOW\n";

    return 0;
}