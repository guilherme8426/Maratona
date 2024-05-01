#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll n, vector<ll> p){
    ll sum = 0;
    vector<ll> ans(21,0);
    for(ll mask=1; mask<(1<<p.size()); mask++){
        ll mult=1, bit=0, sai=0;
        for(int i=0; i<(ll)p.size(); i++){
            if(mask&(1<<i)){
                bit++;
                if(mult > n/p[i]+1){
                    sai=1;
                    break;
                }
                mult*=p[i];
            }
        }
        if(sai) continue;
        ans[bit] += n/mult;
    }

    int m=-1;
    for(int i=1; i<21; i++){
        m*=-1;
        sum += m*ans[i];
    }

    return sum;
}

int main(){

    ll n, k;
    cin >> n >> k;

    vector<ll> p(k);
    for(int i=0; i<k; i++){cin >> p[i];}

    cout << solve(n, p) << "\n";

    return 0;
}