//https://codeforces.com/contest/597/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, maxb, ans=0;
    cin >> n;
    vector<pair<int, int>> r(n);

    for(int i=0; i<n; i++) cin >> r[i].first >> r[i].second;

    sort(r.begin(), r.end());

    maxb = r[0].second;
    for(int i=1; i<n; i++){
        if(r[i].second<maxb) maxb = r[i].second;

        if(r[i].first>maxb){
            ans++;
            maxb = r[i].second;
        }
    }

    cout << ans+1 << "\n";

    return 0;
}