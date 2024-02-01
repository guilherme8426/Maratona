//https://codeforces.com/problemset/problem/1220/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, z; 
    string a;
    
    cin >> m >> a;

    n = count(a.begin(), a.end(),'n');
    z = count(a.begin(), a.end(),'z');

    while(n--) cout << "1 ";
    while(z--) cout << "0 ";

    cout << '\n';

    return 0;
}