#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007

ll fat[(int)1e6+10];
ll inve[(int)1e6+10];
vector<int> b(26,0);

ll mdc(ll a, ll b) { return b == 0 ? a : mdc(b, a % b); }
ll mmc(ll a, ll b) { return a * (b / mdc(a, b));}

ll expo(ll x, unsigned ll y, ll p){
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
        inve[i] = expo(fat[i],MOD-2,MOD);
    }
}

ll solve(ll a){
    ll ans = fat[a];
    for(auto n: b){
        ans = ans*inve[n]%MOD;
    }
    return ans;
}

int main(){
    fatorialEinv();

    int a=0;
    char c;

    while(cin >> c){ 
        a++;
        b[c-'a']++;
    }
    
    cout << solve(a) << "\n";

    return 0;
}
