// exponentiation_II.cpp

#include <bits/stdc++.h>
 
#define ll long long
#define MOD 1000000007
 
using namespace std;
 
ll solve(ll n, ll k, ll mod){ 
    if(k==0) return 1;
    
    ll mult = (n*n)%mod;

    if(k%2 == 1) return (n*solve(mult, (k-1)/2, mod))%mod;
    return (solve(mult, k/2, mod))%mod;
}
 
int main(){
 
    ll q, n, k, j;
    cin >> q;

    while(cin >> n >> k >> j){
        cout << solve(n, solve(k, j, MOD-1), MOD) << "\n";
    }
    
    return 0;
}