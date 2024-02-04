#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll dp[19];

ll solve(ll num){
    if(num == -1) return 0;

    string numero = to_string(num);
    ll ans=1, sz = numero.size();

    dp[0] = 1;
    for(int i=1; i<sz;i++){
        dp[i] = dp[i-1]*9;
        ans += dp[i];
    }
    
    // cout << "numero real: " << numero  << " sz: " << sz << "\n";
    
    for(int i=0; i<sz; i++){
        
        ll algarismo = numero[i]-'0';
        if(i && numero[i-1]>=numero[i]) algarismo++;

        ans += (algarismo-1)*dp[sz-i-1];
        if(i && numero[i]==numero[i-1]) return ans;
    }
    ans++;
    // cout  << "\nans: "<<ans<<"\n\n";

    return ans;
}

int main(){

    ll menor, maior;
    cin >> menor >> maior;

    cout << solve(maior) - solve(menor-1) << "\n";

    return 0;
}