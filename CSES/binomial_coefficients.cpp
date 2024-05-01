#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007

ll fat[(int)1e6+10];
ll inve[(int)1e6+10];

ll mdc(ll a, ll b) { return b == 0 ? a : mdc(b, a % b); }
ll mmc(ll a, ll b) { return a * (b / mdc(a, b));}

ll exp(ll x, unsigned ll y, ll p){
    ll res=1; x=x%p;
    while(y>0){
        if (y&1) res= (res*x)%p; y=y>>1; x=(x*x)%p;
    }
    return res;
}

void fatorialEinv(){
    fat[0] = 1;
    inve[0] = 1;
    for(int i=1; i<=1e6; i++){
        fat[i] = (fat[i-1]*i)%MOD;
        inve[i] = exp(fat[i],MOD-2,MOD);
    }
}

ll solve(ll a, ll b){
    return fat[a]*inve[b]%MOD*inve[a-b]%MOD;
    // aritimetica modular 
}

int main(){
    fatorialEinv();

    ll n, a, b;
    cin >> n;

    while (cin >> a >> b){
        cout << solve(a, b) << "\n";
    }

    return 0;
}