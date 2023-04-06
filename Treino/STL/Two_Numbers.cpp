//https://codeforces.com/problemset/problem/1206/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, max_1=0, max_2=0; 

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a>max_1) max_1 = a;
    }

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a>max_2) max_2 = a;
    }

    cout << max_1 << ' ' << max_2 << '\n';

    return 0;
}