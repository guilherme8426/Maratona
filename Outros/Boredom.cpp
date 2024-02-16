#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    ll n, N=100002;
    cin >> n;

    vector<ll> cnt(N);
    vector<ll> dp(N, 0);
    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        cnt[t]++;
    }

    dp[1] = cnt[1];
    for(int i=2; i<=N; i++){
        dp[i] = max(dp[i-1], i*cnt[i]+dp[i-2]);
    }

    cout << dp[N-1] << "\n";

    return 0;
}