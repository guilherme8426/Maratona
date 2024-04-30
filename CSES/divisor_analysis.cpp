#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007

ll exponentiation_mod(ll n, ll k, ll mod){ 
    if(k==0) return 1;
    
    ll mult = (n*n)%mod;

    if(k%2 == 1) return (n*exponentiation_mod(mult, (k-1)/2, mod))%mod;
    return (exponentiation_mod(mult, k/2, mod))%mod;
}


int main(){

    ll n,p, a, num=1, num_div=1, sum_div=1, div_prod=1, div_cnt2=1;
    cin >> n;

    while(cin >> p >> a){
        num = (num*exponentiation_mod(p,a,MOD))%MOD;
        num_div = (num_div * (a+1))%MOD;

        sum_div = sum_div*(
                            (
                                (
                                    exponentiation_mod(p, a+1, MOD)-1)%MOD
                                )*
                            (
                                exponentiation_mod(p-1, MOD-2, MOD)
                            )%MOD
                          )%MOD;

        div_prod = exponentiation_mod(div_prod, a + 1, MOD) *
		           exponentiation_mod(exponentiation_mod(p, (a * (a + 1) / 2), MOD), div_cnt2, MOD) % MOD;
		div_cnt2 = div_cnt2 * (a + 1) % (MOD - 1);
    }

    cout << num_div << " " << sum_div << " " << div_prod << "\n";
    
    return 0;
}