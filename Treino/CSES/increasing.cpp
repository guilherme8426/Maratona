#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n, att, ant, ans=0;
    cin >> n;

    cin >> ant;
    while (cin >> att){
        if(ant>att) ans += (ant - att);
        ant = max(ant, att);
    }

    cout << ans << "\n";
    return 0;
}