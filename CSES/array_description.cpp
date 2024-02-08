#include <bits/stdc++.h>

#define MOD 1000000007
#define ll long long

using namespace std;

int main(){

    ll n, m, num, ans=0;
    cin >> n >> m;
    vector<vector<ll>> DP(m+2, vector<ll>(n+1, 0));

    for(ll i=1; i<=n; i++){
        cin >> num;
        if(num){
            if(i==1) DP[num][i] = 1;
            else DP[num][i] = DP[num][i-1]+DP[num-1][i-1]+DP[num+1][i-1];
            DP[num][i] %= MOD;
        }
        else{
            for(ll j=1; j<=m; j++){
                if(i==1) DP[j][i] = 1;
                else DP[j][i] = DP[j][i-1]+DP[j-1][i-1]+DP[j+1][i-1];
                DP[j][i] %= MOD;
            }
        }
    }

    for(ll i=1; i<=m; i++) ans = (ans + DP[i][n])%MOD;

    cout << ans << "\n";

    return 0;
}