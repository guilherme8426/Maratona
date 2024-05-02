#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007


ll expo(ll x, unsigned ll y, ll p){
    ll res=1; x=x%p;
    while(y>0){
        if (y&1) res= (res*x)%p; y=y>>1; x=(x*x)%p;
    }
    return res;
}

map<ll,ll> fib;
ll fibonate(ll n){
    if(fib.count(n)) return fib[n];
    if(n==0) return 0;
    if(n==1||n==2) return 1;

    ll k, f1, f2;
    if(n%2==0){
        k=n/2;
        f1 = fibonate(k);
        f2 = fibonate(k-1);

        return fib[n]=(2*f2%MOD+f1)%MOD*f1%MOD;
    }
    else{
        k=(n+1)/2;
        f1 = fibonate(k);
        f2 = fibonate(k-1);

        return fib[n]=((f1*f1%MOD)+(f2*f2%MOD))%MOD;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    cout << fibonate(n) << "\n";

    return 0;
}