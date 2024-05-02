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

ll catalan(ll m){
    ll n = m;
    if(n%2==1) return 0;
    n/=2;

    ll k=0, O=0;
    char c;
    while(cin >> c){
        if(c=='('){
            k++;
            O++;
        }else{
            k--;
        }
        if(k<0) return 0;
    }

    n -= O;
    if(k<0 || n<0 || 2*n+k<n){
        return 0;
    }
    
    ll cat  = bn(2*n+k,n);
    ll mult = (k+1)%MOD*expo(n+k+1,MOD-2,MOD)%MOD;

    return cat*mult%MOD;
    // return bn(2*n,n)*expo(n+1,MOD-2,MOD)%MOD;
}

int main(){
    fatorialEinv();

    int n;
    cin >> n;
    
    cout << catalan(n) << "\n";

    return 0;
}
