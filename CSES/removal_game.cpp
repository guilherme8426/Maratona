#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    ll n;
    cin >> n;

    vector<ll> num(n), sum(n+1, 0);
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    for(int i=0;i<n;i++){
        cin >> num[i];
        sum[i+1]= sum[i]+num[i];
        dp[i][i] = num[i];
    }

    for(int i=n-1; i>=0; i--){
        for(int j=i+1; j<n; j++){

            ll select1=0, select2=0, total=sum[j+1]-sum[i];

            if(i+1<=j) select1 = total - dp[i+1][j];
            if(i<=j-1) select2 = total - dp[i][j-1];

            dp[i][j] = max(select1, select2);
        }
    }

    cout << dp[0][n-1] << "\n";

    return 0;
}