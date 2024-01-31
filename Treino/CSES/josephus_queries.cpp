#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll solve(ll n, ll k){ 
    if(n==1) return 1;

    if(k<=(n+1)/2){
        if(2*k>n) return (2*k)%n;
        return 2*k;
    }
    ll temp=solve(n/2,k-(n+1)/2);
    if(n%2==1) return 2*temp+1;
    return 2*temp-1;
}

int main(){

    ll q, n, k;
    cin >> q;

    while(cin >> n >> k){
        cout << solve(n, k) << "\n";
    }
    
    return 0;
}