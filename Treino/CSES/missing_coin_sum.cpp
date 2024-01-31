#include <bits/stdc++.h>
 
#define ll long long

using namespace std;
 
int main(){
 
    ll n; 
    long long ans=1;
    cin >> n;
    vector<ll> numeros(n);
 
    for(ll i=0; i<n; i++) cin >> numeros[i];
    
    sort(numeros.begin(), numeros.end());
 
    for(long long i=0; i<n && numeros[i]<=ans; i++){
        ans += numeros[i];
    }
 
    cout << ans << "\n";
 
    return 0;
}
