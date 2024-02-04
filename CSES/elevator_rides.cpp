#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    ll n, x, limit; 
    cin >> n >> x;
    vector<ll> pessoa(n);
    for(int i=0;i<n;i++) cin >> pessoa[i];

    limit = 1 << n;
    vector<pair<ll, ll>> dp(limit);
    dp[0] = {1, 0};
    
    for(int mask=1; mask<limit; mask++){
        pair<ll, ll> bestResult = {INT_MAX, INT_MAX};

        for(int i=0; i<n; i++){
            if(((1<<i)&mask) == 0) continue;

            auto res = dp[(1<<i)^mask];

            if(res.second + pessoa[i] <= x){
                res.second += pessoa[i];
            }
            else{
                res.first++;
                res.second = pessoa[i];
            }

            bestResult = min(bestResult, res);
        }

        dp[mask] = bestResult;
    }

    cout << dp[limit-1].first << "\n";

    return 0;
}