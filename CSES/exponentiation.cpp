#include <bits/stdc++.h>
 
#define ll long long
#define MOD 1000000007
 
using namespace std;
 
ll solve(ll n, ll k){ 
    if(k==0) return 1;
    
    ll mult = (n*n)%MOD;

    if(k%2 == 1) return (n*solve(mult, (k-1)/2))%MOD;
    return (solve(mult, k/2))%MOD;
}
 
int main(){
 
    ll q, n, k;
    cin >> q;

    while(cin >> n >> k){
        cout << solve(n, k) << "\n";
    }
    
    return 0;
}