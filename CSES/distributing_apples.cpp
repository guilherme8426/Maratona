#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007

ll fat[(int)2e6+10];
ll inve[(int)2e6+10];
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
    for(int i=1; i<=2e6; i++){
        fat[i] = (fat[i-1]*i)%MOD;
        inve[i] = expo(fat[i],MOD-2,MOD);
    }
}

ll bn(ll a, ll b){
    return fat[a]*inve[b]%MOD*inve[a-b]%MOD;
}

ll box_and_balls(ll a, ll b){
    // return fat[a+b-1]*inve[a-1]%MOD*inve[b]%MOD;
    // é igual
    return bn(a+b-1,b);
}

int main(){
    fatorialEinv();

    int n, m;
    cin >> n >> m;
    
    cout << box_and_balls(n, m) << "\n";

    return 0;
}
